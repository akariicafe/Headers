@class NSObject, NSMapTable, NSMutableDictionary;
@protocol OS_os_transaction;

@interface HVQueuesGuardedData : NSObject {
    NSMapTable *_observers;
    NSMutableDictionary *_queues;
    NSObject<OS_os_transaction> *_contentAvailableNotificationInProgress;
    unsigned int _dataSourcesWithContentAvailable;
}

- (id)init;
- (void).cxx_destruct;

@end
