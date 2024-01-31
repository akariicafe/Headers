@interface SPCoreSpotlightExtensionsTask : NSObject

@property (copy, nonatomic) id /* block */ filterBlock;
@property (copy, nonatomic) id /* block */ performBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)start;
- (void).cxx_destruct;
- (void)_performWithExtensionsEnumerator:(id)a0 completionBlock:(id /* block */)a1;

@end
