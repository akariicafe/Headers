@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject

@property (readonly, nonatomic) SBKStoreURLBagContext *bagContext;

- (id)initWithBagContext:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)timeout;

@end
