@class NSString, CPLNetworkState, NSObject, RadiosPreferences;
@protocol OS_dispatch_queue, CPLNetworkWatcherDelegate, OS_nw_path_monitor;

@interface CPLNetworkWatcher : NSObject <RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_path_monitor> *_monitor;
    struct network_usage_policy_client_s { } *_networkPolicyClient;
    RadiosPreferences *_radiosPreferences;
}

@property (readonly, nonatomic) NSString *endPoint;
@property (readonly, nonatomic) CPLNetworkState *networkState;
@property (weak, nonatomic) id<CPLNetworkWatcherDelegate> delegate;

- (void)airplaneModeChanged;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)_updateCellularPolicyFromPolicies:(id)a0;
- (void)start;
- (BOOL)_isRestrictedPath:(id)a0 policies:(id)a1;
- (void)_getCellularPolicyWithClient:(struct network_usage_policy_client_s { } *)a0;
- (void)_updateNetworkState:(id)a0;
- (void)stop;
- (void)_updateAirplaneMode;
- (void).cxx_destruct;
- (void)_updateCellularPolicy:(id)a0;

@end
