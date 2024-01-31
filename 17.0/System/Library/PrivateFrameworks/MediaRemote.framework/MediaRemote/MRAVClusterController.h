@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVClusterController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSHashTable *_observers;
    NSString *_localPairingIdentity;
    NSString *_clusterUID;
    NSString *_clusterLeaderUID;
    unsigned long long _clusterStatus;
    unsigned int _clusterType;
    int _airplayClusterStatusNotificationToken;
}

@property (class, readonly, nonatomic) BOOL canBeClusterMember;

@property (readonly, nonatomic) BOOL needsCommandRedirection;
@property (readonly, nonatomic) unsigned long long clusterStatus;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, nonatomic) NSString *clusterLeaderUID;
@property (readonly, nonatomic) NSString *clusterUID;

+ (unsigned int)getClusterType;
+ (id)getClusterLeaderUID;
+ (id)sharedController;
+ (id)getClusterUID;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)deviceInfoDidChangeNotification:(id)a0;
- (void)getClusterLeaderEndpoint:(id /* block */)a0;
- (void)onQueue_setClusterType:(unsigned int)a0;
- (void)onQueue_setClusterStatus:(unsigned long long)a0;
- (void)updateClusterInformation;
- (void)onQueue_notifyObserversWithClusterStatus:(unsigned long long)a0;
- (void)getClusterStatus:(id /* block */)a0;
- (void).cxx_destruct;
- (void)onQueue_notifyObserversWithClusterType:(unsigned int)a0;
- (unsigned long long)onQueue_computeClusterStatus;

@end
