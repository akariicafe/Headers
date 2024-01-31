@class NSMutableArray;
@protocol NCNotificationAlertDestinationPrototyping;

@interface NCBannerTransitionBlockingPrototypeRecipe : NSObject {
    NSMutableArray *_assertions;
}

@property (readonly, weak, nonatomic) id<NCNotificationAlertDestinationPrototyping> notificationAlertDestination;

- (void).cxx_destruct;
- (void)_popTopAssertion;
- (void)_pushNewAssertion;
- (id)initWithNotificationAlertDestination:(id)a0;

@end
