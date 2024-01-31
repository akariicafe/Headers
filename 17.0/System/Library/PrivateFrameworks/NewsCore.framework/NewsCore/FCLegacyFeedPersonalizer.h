@class NSString;
@protocol FCPersonalizationFunctionProviding, FCFeedPersonalizing;

@interface FCLegacyFeedPersonalizer : NSObject <FCFeedPersonalizing, FCPersonalizationFunctionProviding>

@property (readonly, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (readonly, nonatomic) id<FCPersonalizationFunctionProviding> functionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (id)init;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)scoresForTagIDs:(id)a0;
- (void).cxx_destruct;
- (double)decayedPublisherDiversificationPenalty;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;
- (id)rankTagIDsDescending:(id)a0;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1;
- (id)initWithFeedPersonalizer:(id)a0 functionProvider:(id)a1;

@end
