@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NCLayoutLoopDetector : NSObject

@property (retain) NSMutableArray *notificationLayoutsInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)removeNotificationRequestFromLayoutsInProgress:(id)a0;
- (void)addNotificationRequestToLayoutsInProgress:(id)a0;
- (BOOL)layoutInProgressContainsNotificationRequest:(id)a0;
- (void)_saveNotificationLayoutsInProgress;
- (id)_savedNotificationLayoutsInProgress;
- (void).cxx_destruct;

@end
