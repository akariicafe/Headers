@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage>

@property (readonly, nonatomic) NSMutableDictionary *recordMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addNotificationRecord:(id)a0;
- (id)_notificationRecords;
- (void)addNotificationRecords:(id)a0;
- (void)_addNotificationRecord:(id)a0;
- (void)removeNotificationRecordsPassingTest:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_removeNotificationRecordsPassingTest:(id /* block */)a0;
- (id)notificationRecords;
- (void)removeAllNotificationRecords;

@end
