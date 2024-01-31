@class NSString;

@interface SBVolumeButtonEventMapper : NSObject <SBUIActiveOrientationObserver>

@property (class, readonly, nonatomic, getter=isVolumeButtonRemappingSupported) BOOL volumeButtonRemappingSupported;

@property (nonatomic) unsigned long long buttonsEdge;
@property (nonatomic) long long effectiveInterfaceOrientation;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, getter=isVolumeButtonRemappingEnabled) BOOL volumeButtonRemappingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldInvertVolumeButtonsForLTRRightEdgePadInInterfaceOrientation:(long long)a0;
+ (BOOL)_shouldInvertVolumeButtonsForLTRTopEdgePadInInterfaceOrientation:(long long)a0;
+ (BOOL)_shouldInvertVolumeButtonsForRTLRightEdgePadInInterfaceOrientation:(long long)a0;
+ (BOOL)_shouldInvertVolumeButtonsForRTLTopEdgePadInInterfaceOrientation:(long long)a0;
+ (BOOL)shouldInvertVolumeButtonsOnEdge:(unsigned long long)a0 forInterfaceOrientation:(long long)a1 userInterfaceLayoutDirection:(long long)a2;

- (id)init;
- (void)dealloc;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)_hardwareDefaultsChanged;
- (void)_resetEffectiveInterfaceOrientation;
- (BOOL)isPreventingEffectiveInterfaceOrientationChanges;
- (BOOL)isVolumeButtonEventInvertible:(id)a0 withPressType:(long long)a1;
- (BOOL)shouldInvertVolumeButtonsForEvent:(id)a0 withPressType:(long long)a1;

@end
