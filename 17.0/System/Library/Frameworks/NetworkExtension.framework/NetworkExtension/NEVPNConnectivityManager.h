@class NSArray, NEConfigurationManager, NSObject;
@protocol OS_dispatch_queue, NEVPNConnectivityManagerDelegate;

@interface NEVPNConnectivityManager : NSObject <NEVPNConnectivitySessionDelegate> {
    NEConfigurationManager *_configManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sessions;
}

@property (nonatomic) unsigned long long visibilityStyle;
@property (nonatomic) unsigned long long connectivityState;
@property (nonatomic) BOOL hasRelayConfigurations;
@property (weak) id<NEVPNConnectivityManagerDelegate> delegate;

- (void)sessionStatusDidChange:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)toggleVPNConnectivity:(BOOL)a0;

@end
