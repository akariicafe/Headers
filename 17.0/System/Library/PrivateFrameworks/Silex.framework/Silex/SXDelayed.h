@interface SXDelayed : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL cancelled;
@property (retain, nonatomic) SXDelayed *strongReference;

+ (id)execute:(id /* block */)a0 delay:(double)a1;

- (void)invoke;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0 delay:(double)a1;

@end
