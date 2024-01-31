@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IOAccessorySystemStateMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *endpointMap;
@property (nonatomic) unsigned long long pmNotificationHandle;
@property (nonatomic) struct IONotificationPort { } *notificationPort;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) unsigned int discoveryIterator;
@property (nonatomic) unsigned int terminationIterator;
@property (nonatomic) int displayNotifyToken;
@property (nonatomic) BOOL userActive;
@property (nonatomic) BOOL userPresent;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addEndpointForService:(unsigned int)a0;
- (void)notifyEndpointsUserActive:(BOOL)a0;
- (void)notifyEndpointsUserPresent:(BOOL)a0;
- (void)processDisplayState;
- (void)removeEndpointForService:(unsigned int)a0;

@end
