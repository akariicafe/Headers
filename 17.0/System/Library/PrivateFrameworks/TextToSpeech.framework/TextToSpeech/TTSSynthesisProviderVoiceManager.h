@class NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue, TTSSynthesisProviderVoiceManagerDelegate;

@interface TTSSynthesisProviderVoiceManager : NSObject

@property (class, retain) NSArray *componentCache;
@property (class, readonly) NSDictionary *voiceCache;
@property (class, readonly) NSArray *allSynthesisProviderVoices;
@property (class, readonly) NSArray *allSynthesisProviderTTSVoices;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *componentQueryQueue;
@property (weak, nonatomic) id<TTSSynthesisProviderVoiceManagerDelegate> delegate;

+ (id)sharedInstance;
+ (void)registerFirstPartyInProcessAudioUnits;
+ (BOOL)_componentIsEqual:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 to:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1;
+ (void)freeSharedInstance;
+ (BOOL)synthesizerHasEntitlement:(id)a0 entitlement:(const char *)a1;
+ (void)resetInMemoryCache;

- (void)_reconcileCachedComponents:(id)a0;
- (id)init;
- (void)_loadVoicesForComponents:(id)a0;
- (void)purgeAndReloadAllComponents;
- (BOOL)_loadVoicesForComponentWithTimeout:(id)a0 timeout:(double)a1 timedOut:(BOOL *)a2;
- (void)_reloadVoiceForBundleIdentifierPrefix:(id)a0;
- (void)fetchAudioUnitInstanceForVoice:(id)a0 completion:(id /* block */)a1;
- (void)reloadVoicesForBundleIdentifierHash:(id)a0;
- (void)reloadVoicesForBundleIdentifierPrefix:(id)a0;
- (void).cxx_destruct;
- (void)reconcileCachedComponents;
- (void)_reloadVoiceForBundleIdentifierHash:(id)a0;
- (void)_loadVoicesForComponentRecord:(id)a0 dispatchGroup:(id)a1;

@end
