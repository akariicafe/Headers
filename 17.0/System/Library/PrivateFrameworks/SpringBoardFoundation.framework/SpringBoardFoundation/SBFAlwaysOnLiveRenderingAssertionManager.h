@class NSString, SBFAlwaysOnLiveRenderingAssertionWeakCollection, BLSAssertion;
@protocol BLSBacklightStateObservable, SBFAlwaysOnLiveRenderingBLSAssertionProvider, SBFAlwaysOnLiveRenderingBLSAttributesProvider;

@interface SBFAlwaysOnLiveRenderingAssertionManager : NSObject <BLSBacklightStateObserving, BLSAssertionObserving> {
    BLSAssertion *_liveRenderingAssertion;
    SBFAlwaysOnLiveRenderingAssertionWeakCollection *_liveRenderingAssertionProxies;
    id<SBFAlwaysOnLiveRenderingBLSAssertionProvider> _assertionProvider;
    id<SBFAlwaysOnLiveRenderingBLSAttributesProvider> _attributesProvider;
    id<BLSBacklightStateObservable> _backlight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidateWithReason:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (void)backlight:(id)a0 didChangeAlwaysOnEnabled:(BOOL)a1;
- (void)_acquireLiveRenderingAssertionIfNeededForProxy:(id)a0 backlight:(id)a1;
- (void)_acquireLiveRenderingAssertionProxy:(id)a0;
- (id)_nextLiveRenderingAssertionProxyIfAny;
- (void)_releaseLiveRenderingAssertionProxy:(id)a0;
- (void)_releaseLiveRenderingAssertionWithReason:(id)a0;
- (id)acquireLiveRenderingAssertionWithReason:(id)a0;
- (void)assertion:(id)a0 didCancelWithError:(id)a1;
- (void)assertion:(id)a0 didFailToAcquireWithError:(id)a1;
- (id)backlight;
- (id)initWithBacklight:(id)a0 assertionProvider:(id)a1 attributesProvider:(id)a2;

@end
