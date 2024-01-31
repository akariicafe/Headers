@protocol NSCopying;

@interface ICDispatchAfterBlocks : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (void)cancelAll;
- (void)dispatchAfter:(double)a0 withBlock:(id /* block */)a1;

@end
