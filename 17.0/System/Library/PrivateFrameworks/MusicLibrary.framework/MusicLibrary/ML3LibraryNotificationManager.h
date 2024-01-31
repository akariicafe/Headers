@class NSMutableArray, NSString, NSMutableOrderedSet, NSObject, ML3MusicLibrary;
@protocol OS_dispatch_queue;

@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_notificationObservers;
    NSMutableOrderedSet *_queuedLocalNotifications;
    NSMutableOrderedSet *_queuedDistributedNotificationNames;
}

@property (readonly, weak, nonatomic) ML3MusicLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)observerShouldForwardDistributedNotification:(id)a0;
- (void)_postEnqueuedDistributedNotifications;
- (void)enqueueLocalNotificationNamed:(id)a0;
- (id)_observerForDistributedName:(id)a0;
- (void)_postEnqueuedLocalNotifications;
- (id)_observerForLocalName:(id)a0;
- (void)enqueueDistributedNotificationNamed:(id)a0;
- (id)initWithLibrary:(id)a0 distributedAndLocalNames:(id)a1;
- (void)removeObserverWithDistributedName:(id)a0;
- (void)removeObserverWithLocalName:(id)a0;
- (void).cxx_destruct;
- (void)enqueueLocalNotification:(id)a0;
- (void)addObserverForDistributedName:(id)a0 localName:(id)a1;

@end
