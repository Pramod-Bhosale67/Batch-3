
class CircularQueue{
    int size;
    int [] q;
    int front;
    int rare;

    public CircularQueue(int size){
        this.size = size;
        q = new int[size];
        front = -1;
        rare = -1;
    }

//    to insert the element at the rare end
    public void enQueue(int data){
        if (rare + 1 == front){
            System.out.println("Overflow");
            return;
        }
//        Empty Queue
        if (isEmpty()){
            front++;
            rare++;
            q[rare] = data;

        }else{
            rare = (rare + 1) % size;
            q[rare] = data;
        }
    }

    // to delete the element at front end
    public void deQueue(){
        if (front == -1){
            System.out.println("Underflow");
            return;
        }

        if (front == rare) { // single element in the queue
            front = rare = -1;
        }else{
            front = (front + 1) % size;
        }
    }

    // checks if queue is empty or not
    public boolean isEmpty(){
        return (rare == -1);
    }

    // first element to be deleted
    public int front(){
        if (front == -1){
            return -1;
        }

        return q[front];
    }

    public void traverse(){

        if (isEmpty()){
            System.out.println("Empty Queue");
            return;
        }

        for (int i = front; i != rare; i = (i + 1) % size){
            System.out.print(q[i] + " ");
        }
        System.out.println();
    }

}


public class Main {
    public static void main(String[] args) {

        CircularQueue queue = new CircularQueue(5);
        queue.enQueue(10);
        queue.enQueue(20);
        queue.enQueue(30);

        queue.traverse();
        queue.deQueue();
        queue.traverse();
        System.out.println(queue.isEmpty());
        System.out.println(queue.front());
    }
}