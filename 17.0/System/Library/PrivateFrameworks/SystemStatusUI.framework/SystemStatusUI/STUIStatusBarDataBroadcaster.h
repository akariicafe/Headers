@class STStatusBarOverridesStatusDomain, STStatusBarData, NSHashTable;

@interface STUIStatusBarDataBroadcaster : NSObject {
    NSHashTable *_dataListeners;
    STStatusBarOverridesStatusDomain *_overridesDomain;
    STStatusBarData *_broadcastData;
}

@property (readonly, nonatomic) STStatusBarData *currentData;

+ (id)sharedInstance;

- (id)_init;
- (void)updateWithData:(id /* block */)a0;
- (void)unregisterListener:(id)a0;
- (void).cxx_destruct;
- (void)registerListener:(id)a0;

@end
