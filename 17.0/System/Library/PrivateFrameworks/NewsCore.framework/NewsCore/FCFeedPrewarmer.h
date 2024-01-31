@class FCThreadSafeMutableDictionary;
@protocol FCContentContext;

@interface FCFeedPrewarmer : NSObject

@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *prewarmOperations;

- (id)initWithContentContext:(id)a0;
- (void).cxx_destruct;
- (void)finishPrewarmingRequestForKey:(id)a0 completion:(id /* block */)a1;
- (void)startPrewarmingRequest:(id)a0;

@end
