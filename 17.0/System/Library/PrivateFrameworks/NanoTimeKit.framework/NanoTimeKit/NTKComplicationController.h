@class NSHashTable, NSMapTable, NTKComplication, NSDate, CLKDevice, NSMutableArray;
@protocol CDComplicationDisplay;

@interface NTKComplicationController : NSObject {
    BOOL _hasGoneLive;
    BOOL _active;
    id<CDComplicationDisplay> _legacyDisplayDEPRECATED;
    NSMutableArray *_displayWrappers;
    NSMapTable *_displayWrappersToDataMode;
    NSMapTable *_displayWrappersToLaunchLocation;
    NSMapTable *_displayWrappersToTritiumState;
    NSHashTable *_assertions;
}

@property (readonly, nonatomic) NTKComplication *complication;
@property (readonly, nonatomic) long long complicationFamily;
@property (readonly, nonatomic) CLKDevice *device;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, weak, nonatomic) id<CDComplicationDisplay> legacyDisplay;
@property (retain, nonatomic) NSDate *pauseDate;
@property (nonatomic) BOOL showsLockedUI;
@property (nonatomic, getter=isFaceZooming) BOOL faceZooming;
@property (readonly, nonatomic) long long cachingMode;
@property (readonly, nonatomic) long long updatingMode;
@property (readonly, nonatomic) long long animationMode;
@property (readonly, nonatomic) long long effectiveFaceDataMode;

+ (BOOL)_isLegacy;
+ (id)DEPRECATEDControllerForComplication:(id)a0 withLegacyDisplay:(id)a1 forDevice:(id)a2;
+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;
+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (Class)_controllerClassForComplicationType:(unsigned long long)a0 family:(long long)a1 device:(id)a2 resolvedFamily:(inout long long *)a3;
+ (id)_newOrCachedControllerOfClass:(Class)a0 complication:(id)a1 variant:(id)a2 device:(id)a3;
+ (Class)controllerClassForComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;
+ (id)controllerForComplication:(id)a0 variant:(id)a1 device:(id)a2;

- (void)_deactivate;
- (void)_activate;
- (void)dealloc;
- (void)activate;
- (void).cxx_destruct;
- (void)deactivate;
- (void)_updateActive;
- (void)DEPRECATEDInvalidate;
- (void)_applyAnimationMode;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_configureForLegacyDisplay:(id)a0;
- (void)_handleRenderStatsForDisplayWrapper:(id)a0 withTime:(double)a1 cost:(double)a2;
- (id)_initWithComplication:(id)a0 legacyDisplay:(id)a1 forDevice:(id)a2;
- (void)_openApp:(id)a0 withURL:(id)a1 forDisplayWrapper:(id)a2 result:(id /* block */)a3;
- (void)_openAppWithURL:(id)a0 forDisplayWrapper:(id)a1;
- (void)_openUserActivity:(id)a0 forApp:(id)a1 forDisplayWrapper:(id)a2 result:(id /* block */)a3;
- (void)_updateEffectiveAnimationMode;
- (void)_updateEffectiveCachingMode;
- (void)_updateEffectiveFaceDataMode;
- (void)_updateEffectiveUpdatingMode;
- (void)_updateInternalModes:(BOOL)a0;
- (void)_updateIsComplicationActive:(BOOL)a0;
- (void)addDataModeAssertion:(id)a0;
- (void)addDisplayWrapper:(id)a0;
- (id)complicationApplicationIdentifier;
- (long long)dataModeForDisplayWrapper:(id)a0;
- (void)didTouchDownInView:(id)a0;
- (void)didTouchUpInsideView:(id)a0;
- (void)enumerateDisplayWrappersWithBlock:(id /* block */)a0;
- (void)handleFaceDefaultsChanged;
- (BOOL)hasTapAction;
- (id)initWithComplication:(id)a0 variant:(id)a1 device:(id)a2;
- (id)launchLocationForDisplayWrapper:(id)a0;
- (void)notifyDelegateOnTimelineChangeWithTritiumUpdatePriority:(long long)a0;
- (void)performTapActionForDisplayWrapper:(id)a0;
- (void)removeDataModeAssertion:(id)a0;
- (void)removeDisplayWrapper:(id)a0;
- (Class)richComplicationDisplayViewClass;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setLaunchLocation:(id)a0 forDisplayWrapper:(id)a1;
- (void)updateDataModeAssertion:(id)a0;
- (BOOL)wantsLegacyDisplay;

@end
