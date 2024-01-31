@class NSString;

@interface PBFGenericDisplayContext : NSObject <PBFDisplayContext> {
    NSString *_pbf_displayContextPersistenceIdentifier;
    unsigned long long _cachedHash;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pbf_referenceBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pbf_frame;
@property (readonly, nonatomic) double pbf_scale;
@property (readonly, nonatomic) long long pbf_interfaceOrientation;
@property (readonly, nonatomic) unsigned long long pbf_significantEventsCounter;
@property (readonly, nonatomic) long long pbf_userInterfaceStyle;
@property (readonly, nonatomic) long long pbf_accessibilityContrast;
@property (readonly, copy, nonatomic) NSString *pbf_displayContextPersistenceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainScreen;
+ (id)displayContextForDisplayConfiguration:(id)a0;
+ (id)displayContextForDisplayIdentifier:(id)a0;
+ (id)displayContextForPersistenceIdentifier:(id)a0;
+ (id)displayContextForScreen:(id)a0;
+ (id)displayContextForScreen:(id)a0 traitCollection:(id)a1;
+ (id)genericDisplayContextWithDisplayContext:(id)a0;
+ (id)mainScreenDisplayContextsForKnownOrientations;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)displayContextWithUpdatedAccessibilityContrast:(long long)a0;
- (id)displayContextWithUpdatedInterfaceOrientation:(long long)a0;
- (id)displayContextWithUpdatedSignificantEventsCounter:(unsigned long long)a0;
- (id)displayContextWithUpdatedUserInterfaceStyle:(long long)a0;
- (BOOL)geometryIsEqualTo:(id)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 interfaceOrientation:(long long)a2 sigEventsCounter:(unsigned long long)a3 userInterfaceStyle:(long long)a4 accessibilityContrast:(long long)a5;
- (BOOL)isEqualToDisplayContext:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pbf_frame;

@end
