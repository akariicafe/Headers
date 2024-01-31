@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface IRTapToRadar : NSObject

@property (retain, nonatomic) NSDate *previousNotificationDate;
@property BOOL pendingNotificationPresent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)_createPeriodicPromptIfAllowed:(id)a0;
- (id)_createErrorEventPromptIfAllowed:(id)a0;
- (id)_createErrorEventsPromptsForMediaEvent:(id)a0;
- (id)_createPeriodicPromptsForMediaEvent:(id)a0;
- (id)_errorEventQuestionaire:(id)a0;
- (void)_initiatePopupAndTTR:(id)a0;
- (id)_triggerUserPrompts:(id)a0;
- (void)promptForTapToRadarIfAllowed:(id)a0;

@end
