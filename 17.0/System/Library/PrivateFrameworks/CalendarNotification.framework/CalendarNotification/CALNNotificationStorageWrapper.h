@class NSString;
@protocol CALNNotificationStorage;

@interface CALNNotificationStorageWrapper : NSObject <CALNNotificationStorage>

@property (retain) id<CALNNotificationStorage> wrappedStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotificationRecord:(id)a0;
- (void)addNotificationRecords:(id)a0;
- (void)removeNotificationRecordsPassingTest:(id /* block */)a0;
- (void).cxx_destruct;
- (id)notificationRecords;
- (id)initWithWrappedStorage:(id)a0;
- (void)removeAllNotificationRecords;

@end
