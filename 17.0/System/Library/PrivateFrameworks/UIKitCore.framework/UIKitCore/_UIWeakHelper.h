@interface _UIWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDeallocationBlock:(id /* block */)a0;

@end
