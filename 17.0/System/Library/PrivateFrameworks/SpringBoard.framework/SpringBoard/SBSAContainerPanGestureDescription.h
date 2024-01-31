@interface SBSAContainerPanGestureDescription : SBSAGestureDescription

@property (nonatomic, setter=_setInitialLocation:) struct CGPoint { double x; double y; } initialLocation;
@property (nonatomic, setter=_setTranslation:) struct CGPoint { double x; double y; } translation;

+ (Class)mutatorClass;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
