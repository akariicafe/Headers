@class NSString, PABasicAssetIdentifierPool;
@protocol PAProcessStateMonitoringEnding;

@interface PAAssetIdentifierPool : NSObject <PAAssetIdentifierPooling> {
    PABasicAssetIdentifierPool *_assetIdentifierPool;
    id<PAProcessStateMonitoringEnding> _stateMonitorHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)drainPool;
- (void).cxx_destruct;
- (void)addAssetIdentifiers:(id)a0;
- (void)addAssetIdentifiers:(id)a0 accessEventCount:(unsigned long long)a1;
- (id)initWithMaxPoolSize:(unsigned long long)a0 autoDrainInterval:(double)a1 bundleRecord:(id)a2 aggregateVisibilityStateMonitor:(id)a3 onQueue:(id)a4 delegate:(id)a5;

@end
