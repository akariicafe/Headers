@class IODConnection, NSString, NSPointerArray, IOKNotificationPort, IOKInterestNotification, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface TSDKernelClock : NSObject {
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientsLock;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    IOKService *_service;
    IODConnection *_connection;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceLock;
    unsigned long long _asyncCallbackRefcon;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic) int lockState;
@property (readonly, nonatomic) IOKService *service;
@property (readonly, nonatomic) IODConnection *connection;
@property (readonly, nonatomic) double hostRateRatio;
@property (readonly, copy, nonatomic) NSString *clockName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;

+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)availableKernelClockIdentifiers;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;
+ (id)serviceForClockIdentifier:(unsigned long long)a0;

- (id)clients;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)notificationQueue;
- (void).cxx_destruct;
- (int)_lockState;
- (void)_handleInterestNotification:(unsigned int)a0 withArgument:(void *)a1;
- (void)_handleNotification:(unsigned int)a0 withArg1:(unsigned long long)a1 andArg2:(unsigned long long)a2;
- (void)_handleNotification:(unsigned int)a0 withArgs:(unsigned long long *)a1 ofCount:(unsigned int)a2;
- (void)_handleRefreshConnection;
- (void)_refreshLockStateOnNotificationQueue;
- (id)clockName;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)a0;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0;
- (BOOL)convertFromTimeSyncTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)a0;
- (BOOL)deregisterAsyncCallback;
- (void)finalizeNotifications;
- (BOOL)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (double)hostRateRatio;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (id)initWithClockIdentifier:(unsigned long long)a0 pid:(int)a1;
- (BOOL)registerAsyncCallback;

@end
