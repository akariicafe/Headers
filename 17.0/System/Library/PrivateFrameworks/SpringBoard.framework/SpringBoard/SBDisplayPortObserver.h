@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, SBDisplayPortObserverDelegate;

@interface SBDisplayPortObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, setter=setIONotificationPort:) struct IONotificationPort { } *ioNotificationPort;
@property (nonatomic) unsigned int ioServiceAddedIterator;
@property (nonatomic) BOOL matchingNotificationsStarted;
@property (retain, nonatomic) NSMutableDictionary *transportNotifiers;
@property (weak, nonatomic) id<SBDisplayPortObserverDelegate> delegate;
@property (readonly, nonatomic, getter=isDisplayPortConnected) BOOL displayPortConnected;

- (id)init;
- (void)dealloc;
- (void)_notifyDelegate;
- (void).cxx_destruct;
- (void)_addTransportNotificationForService:(unsigned int)a0 andRegistryEntryID:(unsigned long long)a1;
- (void)_handleNotificationForService:(unsigned int)a0 messageType:(unsigned int)a1 messageArgument:(void *)a2;
- (void)_handleServiceAdded:(unsigned int)a0;
- (void)_removeTransportNotificationForRegistryEntryID:(unsigned long long)a0;
- (BOOL)startMatchingNotifications;
- (void)stopMatchingNotifications;

@end
