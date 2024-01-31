@interface _NAObserverProxy : NSObject

@property (readonly, weak, nonatomic) id weakObserver;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithWeakObserver:(id)a0;

@end
