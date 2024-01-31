@class SBSAPlatformMetricsContext, NSArray, NSString, SBSADefaultsContext, BSOrderedDictionary, SBSAViewDescription, SBSAPreferences;

@interface SBSAContext : NSObject <SBSAContextRepresenting, NSCopying, SBSADictionaryDescribable, SBSABlockMutating>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (readonly, copy, nonatomic) SBSAPreferences *preferences;
@property (readonly, nonatomic) unsigned long long signals;
@property (readonly, nonatomic) unsigned long long flags;
@property (nonatomic, setter=_setDisplayScale:) double displayScale;
@property (nonatomic, setter=_setMinimumNumberOfContainers:) unsigned long long minimumNumberOfContainers;
@property (nonatomic, setter=_setMaximumNumberOfElements:) unsigned long long maximumNumberOfElements;
@property (nonatomic, setter=_setInertContainerFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inertContainerFrame;
@property (nonatomic, setter=_setSystemContainerBounds:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } systemContainerBounds;
@property (copy, nonatomic, setter=_setPlatformMetrics:) SBSAPlatformMetricsContext *platformMetrics;
@property (nonatomic, setter=_setLayoutDirection:) long long layoutDirection;
@property (nonatomic, setter=_setLandscapeScreenEdgeInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } landscapeScreenEdgeInsets;
@property (nonatomic, setter=_setOverrideRenderingStyle:) long long overrideRenderingStyle;
@property (nonatomic, setter=_setCloningStyle:) long long cloningStyle;
@property (nonatomic, getter=isIndicatorVisible, setter=_setIndicatorVisible:) BOOL indicatorVisible;
@property (nonatomic, getter=isHeavyShadowRequiredForTransition, setter=_setHeavyShadowRequiredForTransition:) BOOL heavyShadowRequiredForTransition;
@property (nonatomic, getter=isKeyLineRequiredForTransition, setter=_setKeyLineRequiredForTransition:) BOOL keyLineRequiredForTransition;
@property (nonatomic, getter=isAccessibilityZoomActiveAndEnabled, setter=_setAccessibilityZoomActiveAndEnabled:) BOOL accessibilityZoomActiveAndEnabled;
@property (nonatomic, getter=isReduceTransparencyEnabled, setter=_setReduceTransparencyEnabled:) BOOL reduceTransparencyEnabled;
@property (nonatomic, getter=isAnimatedTransitionInProgress, setter=_setAnimatedTransitionInProgress:) BOOL animatedTransitionInProgress;
@property (copy, nonatomic, setter=_setContainerParentViewDescription:) SBSAViewDescription *containerParentViewDescription;
@property (copy, nonatomic, setter=_setRequests:) NSArray *requests;
@property (copy, nonatomic, setter=_setElementContexts:) NSArray *elementContexts;
@property (copy, nonatomic, setter=_setElementSnapshotContexts:) NSArray *elementSnapshotContexts;
@property (copy, nonatomic, setter=_setDefaultsContext:) SBSADefaultsContext *defaultsContext;
@property (copy, nonatomic, setter=_setGestureDescriptions:) NSArray *gestureDescriptions;
@property (copy, nonatomic, setter=_setAnimatedTransitionResults:) NSArray *animatedTransitionResults;
@property (copy, nonatomic, setter=_setElapsedTimerDescriptions:) NSArray *elapsedTimerDescriptions;
@property (copy, nonatomic, setter=_setContainerViewDescriptions:) NSArray *containerViewDescriptions;
@property (copy, nonatomic, setter=_setPreferences:) SBSAPreferences *preferences;
@property (nonatomic, setter=_setSignals:) unsigned long long signals;
@property (nonatomic, setter=_setFlags:) unsigned long long flags;
@property (readonly, nonatomic) unsigned long long queryIteration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) BSOrderedDictionary *dictionaryDescription;

+ (id)instanceWithBlock:(id /* block */)a0;
+ (id)instanceWithQueryIteration:(unsigned long long)a0 block:(id /* block */)a1;

- (id)copyWithBlock:(id /* block */)a0;
- (id)_initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyByAddingFlags:(unsigned long long)a0 debugRequestingProvider:(id)a1;
- (id)copyByAddingSignals:(unsigned long long)a0 debugRequestingProvider:(id)a1;
- (id)copyByUpdatingPreferences:(id)a0;
- (id)initWithQueryIteration:(unsigned long long)a0;

@end
