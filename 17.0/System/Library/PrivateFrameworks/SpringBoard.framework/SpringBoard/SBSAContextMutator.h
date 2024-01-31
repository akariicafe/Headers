@class SBSAContext, NSArray, SBSAPlatformMetricsContext, SBSADefaultsContext, SBSAViewDescription, SBSAPreferences;

@interface SBSAContextMutator : NSObject

@property (copy, nonatomic) SBSAPreferences *preferences;
@property (nonatomic) unsigned long long signals;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) SBSAContext *context;
@property (nonatomic) double displayScale;
@property (copy, nonatomic) NSArray *requests;
@property (copy, nonatomic) NSArray *gestureDescriptions;
@property (copy, nonatomic) NSArray *animatedTransitionResults;
@property (copy, nonatomic) NSArray *elapsedTimerDescriptions;
@property (nonatomic) unsigned long long minimumNumberOfContainers;
@property (nonatomic) unsigned long long maximumNumberOfElements;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } inertContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } systemContainerBounds;
@property (nonatomic) SBSAPlatformMetricsContext *platformMetrics;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } landscapeScreenEdgeInsets;
@property (nonatomic) long long overrideRenderingStyle;
@property (nonatomic) long long cloningStyle;
@property (nonatomic, getter=isIndicatorVisible) BOOL indicatorVisible;
@property (nonatomic, getter=isHeavyShadowRequiredForTransition) BOOL heavyShadowRequiredForTransition;
@property (nonatomic, getter=isKeyLineRequiredForTransition) BOOL keyLineRequiredForTransition;
@property (nonatomic, getter=isAccessibilityZoomActiveAndEnabled) BOOL accessibilityZoomActiveAndEnabled;
@property (nonatomic, getter=isReduceTransparencyEnabled) BOOL reduceTransparencyEnabled;
@property (nonatomic, getter=isAnimatedTransitionInProgress) BOOL animatedTransitionInProgress;
@property (copy, nonatomic) SBSAViewDescription *containerParentViewDescription;
@property (copy, nonatomic) NSArray *elementContexts;
@property (copy, nonatomic) NSArray *elementSnapshotContexts;
@property (copy, nonatomic) SBSADefaultsContext *defaultsContext;
@property (copy, nonatomic) NSArray *containerViewDescriptions;

- (id)initWithContext:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
