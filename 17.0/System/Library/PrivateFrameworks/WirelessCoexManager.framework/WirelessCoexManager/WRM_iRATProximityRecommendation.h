@class WRM_iRATProximityRecommendationLogging;

@interface WRM_iRATProximityRecommendation : NSObject

@property (nonatomic) int RecommendationType;
@property (nonatomic) BOOL linkRecommendationIsValid;
@property (nonatomic) BOOL linkIsRecommended;
@property (retain, nonatomic) WRM_iRATProximityRecommendationLogging *metrics;

- (id)init;
- (void)dealloc;

@end
