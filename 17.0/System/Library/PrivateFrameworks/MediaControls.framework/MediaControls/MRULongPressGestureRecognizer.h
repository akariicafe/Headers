@class NSMutableArray;

@interface MRULongPressGestureRecognizer : UILongPressGestureRecognizer

@property (retain, nonatomic) NSMutableArray *cancellationHandlers;

- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)addCancellationHandler:(id /* block */)a0;

@end
