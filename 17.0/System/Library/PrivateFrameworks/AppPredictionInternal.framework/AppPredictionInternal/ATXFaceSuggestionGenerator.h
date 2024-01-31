@class ATXPosterDescriptorCache, NSString, ATXFaceGalleryConfiguration, ATXPosterConfigurationCache, _PASQueueLock, _PASSimpleCoalescingTimer, NSObject;
@protocol ATXFaceSuggestionParameters, ATXFaceSuggestionGeneratorDelegate, ATXFaceGalleryLayoutGeneratorComplicationProviding, OS_dispatch_queue, ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding;

@interface ATXFaceSuggestionGenerator : NSObject <ATXPosterDescriptorCacheObserver, ATXPosterConfigurationCacheObserver> {
    ATXPosterDescriptorCache *_descriptorCache;
    ATXPosterConfigurationCache *_configurationCache;
    id<ATXFaceGalleryLayoutGeneratorComplicationProviding> _complicationProvider;
    id<ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding> _complicationDescriptorProvider;
    id<ATXFaceSuggestionParameters> _parameters;
    _PASQueueLock *_lock;
    _PASSimpleCoalescingTimer *_regenerationCoalescingTimer;
    NSObject<OS_dispatch_queue> *_outputQueue;
}

@property (weak, nonatomic) id<ATXFaceSuggestionGeneratorDelegate> delegate;
@property (readonly, nonatomic) ATXFaceGalleryConfiguration *faceGalleryConfiguration;
@property (readonly, nonatomic) BOOL shouldUseDayZeroCuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescriptorCache:(id)a0 configurationCache:(id)a1 complicationProvider:(id)a2 complicationDescriptorProvider:(id)a3 parameters:(id)a4;
- (void)regenerateFaceGalleryConfigurationImmediatelyWithReason:(id)a0;
- (void)regenerateFaceGalleryConfigurationCoalescedWithReason:(id)a0;
- (id)_createLayoutGeneratorWithDayZero:(BOOL)a0 locale:(id)a1;
- (void)_generateFaceGalleryConfigurationNotifyingWithGuardedData:(id)a0;
- (void).cxx_destruct;
- (void)configurationCacheDidUpdateWithNewConfigurations:(id)a0 oldConfigurations:(id)a1;
- (void)descriptorCacheDidUpdateWithDescriptors:(id)a0;

@end
