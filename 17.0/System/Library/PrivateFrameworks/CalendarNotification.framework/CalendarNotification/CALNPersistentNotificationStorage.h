@class NSString, NSObject, CALNInMemoryNotificationStorage;
@protocol OS_dispatch_queue;

@interface CALNPersistentNotificationStorage : NSObject <CALNNotificationStorage> {
    BOOL _protected;
}

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) CALNInMemoryNotificationStorage *inMemoryStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistentNotificationStorageWithPath:(id)a0 isProtectedStorage:(BOOL)a1;
+ (id)notificationRecordsFromPersistentNotificationStorageWithPath:(id)a0 error:(id *)a1;

- (BOOL)_saveNotificationsWithError:(id *)a0;
- (id)initWithPath:(id)a0 isProtectedStorage:(BOOL)a1;
- (void)addNotificationRecord:(id)a0;
- (void)addNotificationRecords:(id)a0;
- (void)removeNotificationRecordsPassingTest:(id /* block */)a0;
- (void).cxx_destruct;
- (id)notificationRecords;
- (BOOL)_loadNotificationsWithError:(id *)a0;
- (void)removeAllNotificationRecords;

@end
