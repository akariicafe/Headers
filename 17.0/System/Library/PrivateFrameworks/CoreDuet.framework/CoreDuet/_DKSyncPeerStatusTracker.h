@class NSMutableDictionary, _DKKnowledgeStorage, NSDate, NSMutableArray, _DKSyncPeer;

@interface _DKSyncPeerStatusTracker : _DKSyncContextObject {
    NSMutableDictionary *_peerInfos;
    _DKSyncPeer *_pseudoPeer;
    NSMutableArray *_observers;
    NSMutableDictionary *_lastSuccessfulActivityDates;
    NSDate *_firstForeignPeersCountDate;
}

@property (weak, nonatomic) _DKKnowledgeStorage *storage;

+ (id)sharedInstance;
+ (id)peerStatusTrackerWithContext:(id)a0;
+ (id)stringForTransports:(long long)a0;

- (void)removeStatusChangeObserver:(id)a0;
- (void)removeActiveTransports:(long long)a0 fromPeer:(id)a1;
- (id)existingPeerWithIDSDeviceIdentifier:(id)a0;
- (id)allPeers;
- (void)setSourceDeviceID:(id)a0 version:(id)a1 peer:(id)a2;
- (id)initWithContext:(id)a0;
- (void)addActiveTransports:(long long)a0 toPeer:(id)a1;
- (id)peerWithZoneName:(id)a0 sourceDeviceID:(id)a1;
- (void)setLastSuccessfulActivityDate:(id)a0 onTransport:(long long)a1 forPeer:(id)a2;
- (void)setLastSeenDate:(id)a0 onPeer:(id)a1;
- (id)lastSuccessfulActivityDateOnTransport:(long long)a0 forPeer:(id)a1;
- (id)description;
- (void)removePeer:(id)a0;
- (id)pseudoPeerForSyncTransportCloudUp;
- (id)peersWithAnyActiveTransports;
- (unsigned long long)foreignPeersCount;
- (void).cxx_destruct;
- (long long)activeTransportsForPeer:(id)a0;
- (void)debugLogPeers;
- (id)existingPeerWithSourceDeviceID:(id)a0;
- (id)peerWithIDSDeviceIdentifier:(id)a0;
- (id)addStatusChangeObserverWithBlock:(id /* block */)a0;
- (id)peersWithActiveTransports:(long long)a0;
- (id)peerWithCompanionLinkDevice:(id)a0;
- (BOOL)isSingleDevice;

@end
