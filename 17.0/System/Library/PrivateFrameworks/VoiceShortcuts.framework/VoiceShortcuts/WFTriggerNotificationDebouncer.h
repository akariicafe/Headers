@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, WFTriggerNotificationDebouncerDelegate;

@interface WFTriggerNotificationDebouncer : NSObject

@property (readonly, nonatomic) NSMutableDictionary *notificationItemTable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<WFTriggerNotificationDebouncerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)addEventsWithIdentifiers:(id)a0 configuredTrigger:(id)a1 workflowReference:(id)a2;
- (void)debouncerDidFire:(id)a0;

@end
