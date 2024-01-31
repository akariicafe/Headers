@class UIColor, NSString, NSUUID;
@protocol SAElementIdentifying;

@interface SBSAContainerViewDescription : SBSAViewDescription <SBSAElementAssociating, SBSAContainerKeyLineDescribing, SBSAContainerShadowDescribing>

@property (copy, nonatomic, setter=_setAssociatedSystemApertureElementIdentity:) id<SAElementIdentifying> associatedSystemApertureElementIdentity;
@property (nonatomic, setter=_setContentScale:) struct CGSize { double width; double height; } contentScale;
@property (nonatomic, setter=_setContentBounds:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (nonatomic, setter=_setContentCenter:) struct CGPoint { double x; double y; } contentCenter;
@property (nonatomic, setter=_setKeyLineMode:) long long keyLineMode;
@property (copy, nonatomic, setter=_setKeyLineTintColor:) UIColor *keyLineTintColor;
@property (nonatomic, setter=_setSampledBackgroundLuminanceLevel:) long long sampledBackgroundLuminanceLevel;
@property (nonatomic, setter=_setShadowStyle:) long long shadowStyle;
@property (nonatomic, setter=_setRenderingConfiguration:) struct SBSystemApertureContainerRenderingConfiguration { long long renderingStyle; long long cloningStyle; } renderingConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *interfaceElementIdentifier;

+ (Class)mutatorClass;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyByPixelAligningGeometryWithScale:(double)a0;

@end
