@class NSNumber, NSString;
@protocol RecommendationFlowControllerDelegate;

@interface ICQUIReviewLargeFilesFlowController : UIViewController <UIAdaptivePresentationControllerDelegate, RecommendationFlowController>

@property (retain, nonatomic) NSNumber *storageRecovered;
@property (weak, nonatomic) id<RecommendationFlowControllerDelegate> cloudRecommendationsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
