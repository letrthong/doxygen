
  /**
  *  @brief Class that maintains a variable-sized stack of integers.  
  */  
  class IntegerStack
  {
  public:
     // Default constructor   
     IntegerStack(int size = 64);

     // Copy constructor  
     IntegerStack(const IntegerStack& s);

     // Destructor  
     ~IntegerStack();

     // Answer top element and pop it off
     int pop();

     // Push the specified element on top of myself
     void push(int element);

     // Answer true iff I'm empty
     bool isEmpty() const;

     // Assignment operator
     IntegerStack& operator = (const IntegerStack& s);

  protected:

  private:
     int* elements_;  ///< Pointer to an array to hold my elements
     int  size_;      ///< Size of my element array
     int  top_;       ///< Index of where the next element will be pushed
  };
