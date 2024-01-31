@class NSString, NSArray, MRAVEndpoint, NSSet, NSMutableDictionary, NSObject, MRAVRoutingDiscoverySession, NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MRAVReconnaissanceSession : NSObject {
    double _timeoutTimerTimeout;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_localMatchingDevicesFound;
    NSMutableSet *_knownIncompleteClusterMembers;
    BOOL _searchInProgress;
    BOOL _shouldWaitForUnanimousEndpoints;
    NSString *_matchingOutputDeviceGroupID;
    MRAVRoutingDiscoverySession *_discoverySession;
    NSSet *_matchingOutputDeviceUIDsSet;
    id _discoverySessionCallbackToken;
    id /* block */ _callback;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableDictionary *_matchingDevicesFound;
    NSMutableArray *_matchingEndpointsFound;
    MRAVEndpoint *_unanimousEndpoint;
    NSArray *_availableOutputDevices;
    NSArray *_availableEndpoints;
    unsigned long long _updatesReceived;
    NSArray *_lastProcessedOutputDevices;
    NSArray *_lastProcessedEndpoints;
    unsigned long long _expectedLogicalDevices;
}

@property (readonly, nonatomic) NSArray *matchingOutputDeviceUIDs;
@property (readonly, nonatomic) NSString *matchingOutputDeviceGroupID;
@property (readonly, nonatomic) unsigned int endpointFeatures;
@property (readonly, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic) BOOL useWeakMatching;
@property (nonatomic) BOOL returnPartialResults;
@property (nonatomic) BOOL waitForCompleteClusters;
@property (copy, nonatomic) NSArray *matchingLogicalDeviceIDs;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelSearch;
- (void)beginSearchWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)beginSearchWithTimeout:(double)a0 endpointsCompletion:(id /* block */)a1;
- (void)beginSearchWithTimeout:(double)a0 mapCompletion:(id /* block */)a1;
- (id)initWithOutputDeviceUIDs:(id)a0 outputDeviceGroupID:(id)a1 features:(unsigned int)a2;

@end
