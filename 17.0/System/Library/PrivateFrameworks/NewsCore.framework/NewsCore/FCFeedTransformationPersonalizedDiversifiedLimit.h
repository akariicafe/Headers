@class NSString;
@protocol FCPersonalizationFunctionProviding;

@interface FCFeedTransformationPersonalizedDiversifiedLimit : NSObject <FCLimitAwareFeedTransforming>

@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) id<FCPersonalizationFunctionProviding> functionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithFunctionProvider:(id)a0;
+ (id)transformationWithFunctionProvider:(id)a0 limit:(unsigned long long)a1;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)a0 withRespectToLimit:(unsigned long long)a1;

@end
