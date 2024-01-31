@class NSMutableDictionary, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface AppletConfigurationData : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSUserDefaults *userDefaults;
    NSDictionary *config;
    NSMutableDictionary *pluginCache;
    unsigned long long maErrorCount;
    BOOL retryInProgress;
    double maMetadataQueryInterval;
}

+ (void)init;
+ (id)getHerculesSettings;
+ (id)pluginDecoderForMid:(id)a0;
+ (id)getWuluSettings;
+ (BOOL)setConfiguration:(id)a0;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)getStaticConfig;
+ (id)getNFCSettings;
+ (id)getDreamworksSettings;
+ (id)dataHash;
+ (id)getSlalomSettings;
+ (id)scriptForModule:(id)a0;
+ (id)getExpressModeSettings;
+ (id)extraDebugScriptForModule:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)tsmScriptPerformed:(id)a0;

@end
