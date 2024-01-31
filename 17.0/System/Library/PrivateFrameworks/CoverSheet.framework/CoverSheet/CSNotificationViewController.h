@class NSString;
@protocol SBUIPresentableHomeGestureContext;

@interface CSNotificationViewController : NCNotificationShortLookViewController <SBBarSwipeAffordanceObserver, SBUIPresentableLocalHomeGestureParticipant>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIPresentableHomeGestureContext> homeGestureContext;

@end
