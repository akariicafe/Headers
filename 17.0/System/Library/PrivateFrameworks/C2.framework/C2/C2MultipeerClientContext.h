@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_source, OS_os_activity;

@interface C2MultipeerClientContext : NSObject

@property (retain, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (nonatomic) unsigned long long startTimestamp;
@property (retain, nonatomic) NSMutableSet *discoveryPeers;
@property (retain, nonatomic) NSString *chunkDataRequestedFromPeer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTrigger;
@property (nonatomic) BOOL hasReplied;
@property (copy, nonatomic) id /* block */ chunkDataCallback;

- (id)init;
- (void).cxx_destruct;
- (void)stopTimer;
- (BOOL)hadFailedToDiscover;
- (void)resetTimerForChunkData;
- (void)resetTimerForDiscovery;
- (void)startTimerOnQueue:(id)a0;

@end
