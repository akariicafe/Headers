@class SNNMILFunction;

@interface SNNMILOperationEnumerator : NSEnumerator {
    int _currentIndex;
}

@property (weak, nonatomic) SNNMILFunction *function;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithFunction:(id)a0;

@end
