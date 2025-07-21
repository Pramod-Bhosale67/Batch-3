class Stack{
    int size;
    int top;
    int[] st;

    public Stack(int size){
        this.size = size;
        top = -1;
        st = new int[size];
    }

    public void push(int data){
        if (top == size - 1){
            System.out.println("Overflow");
            return;
        }

        top = top + 1;
        st[top] = data;
    }

    public void pop(){
        if (isEmpty()){
            System.out.println("Underflow");
            return;
        }
        top--;
    }

    public int peek(){
        if (isEmpty()){
            return -1;
        }
        return st[top];
    }

    public boolean isEmpty(){
        return (top == -1 ? true : false);
    }

    public void traversal(){
        if (isEmpty()){
            System.out.println("Empty");
            return;
        }

        for (int i = 0; i <= top; i++){
            System.out.print(st[i] + " ");
        }
    }

}