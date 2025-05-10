public class Array<E> {
    private E[] data;
    private int size;

    //  构造函数，传入数组的容量capacity构造Array
    public Array(int capacity){
        data = (E[])new Object[capacity];
        size = 0;
    }

    //  无参数的构造函数，默认数组的容量capacity=10
    public Array(){
        this(10);
    }

    public int getSize(){
        return size;
    }

    public int getCapacity(){
        return data.length;
    }

    public boolean isEmpty(){
        return size == 0;
    }

    public void addLast(E e){
        add(size,e);
    }

    public void addFirst(E e){
        add(0,e);
    }

    public void add(int index,E e) {

        if(index < 0 || index > size)
            throw new IllegalArgumentException("Add failed. Require index >=0 and index <= size");

        if(size == data.length)
            // throw new IllegalArgumentException("Add failed. Array is full");
            resize(2 * data.length);

        for(int i = size-1; i>=index; i--)
            data[i+1] = data[i];
        data[index] = e;
        size++;

    }
    //  获取index索引位置的元素
    public E get(int index){
        if(index < 0 || index >= size)
            throw new IllegalArgumentException("Get failed. Index is illegal.");
        return data[index];
    }

    // 修改index索引位置的元素为e
    public void set(int index,E e){
        if(index < 0 || index >= size)
            throw new IllegalArgumentException("Set failed. Index is illegal.");
        data[index] = e;
    }

    // 查找数组中元素e所在的索引
    public boolean contain(E e){
        for(int i=0;i < size; i++){
            if(data[i].equals(e))
                return true;
        }
        return false;
    }

    // 查找数组中元素e所在的索引,如果元素不存在元素e,则返回-1
    public int find(E e){
        for(int i = 0; i < size; i++){
            if(data[i].equals(e))
                return i;
        }
        return -1;
   }

   //
    public int findAll(E e){
        return -1;
    }

   public E removeFirst(){
        return remove(0);
   }

   public E removeLast(){
        return remove(size - 1);
   }

   // 从数组中删除元素e
   public boolean removeElement(E e){
        int index = find(e);
        if(index != -1){
            remove(index);
            return true;
        }
        return false;
   }

   public boolean removeAllElement(E e){
        return false;
   }

   // 删除元素是插入的反过程
    public E remove(int index){
        if(index < 0 || index >= size)
            throw new IllegalArgumentException("Remove failed. Index is illegal.");
        E ret = data[index];
        for(int i = index+1; i< size; i++){
            data[i - 1] = data[i];
        }
        size--;
        data[size] = null; // 这句话不是必须的 loitering objects != memory leak
        if(size == data.length / 4 && data.length / 2 != 0)
            resize(data.length / 2);
        return ret;
    }



    @Override
    public String toString(){
        StringBuilder res = new StringBuilder();
        res.append(String.format("Array size =%d, capacity =%d\n", size, data.length));
        res.append('[');
        for(int i = 0; i< size; i++) {
            res.append(data[i]);
            if( i != size - 1)
                res.append(", ");
        }
        res.append(']');
        return res.toString();
    }

    private void resize(int newCapacity){
        E[] newData = (E[])new Object[newCapacity];
        for(int i = 0; i < size; i++)
            newData[i] = data[i];
        data = newData;
    }
}
