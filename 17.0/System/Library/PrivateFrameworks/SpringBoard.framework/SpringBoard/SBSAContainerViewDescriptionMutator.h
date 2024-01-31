@class UIColor;
@protocol SAElementIdentifying;

@interface SBSAContainerViewDescriptionMutator : SBSAViewDescriptionMutator

@property (copy, nonatomic) id<SAElementIdentifying> associatedSystemApertureElementIdentity;
@property (nonatomic) struct CGSize { double x0; double x1; } contentScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentCenter;
@property (nonatomic) long long keyLineMode;
@property (copy, nonatomic) UIColor *keyLineTintColor;
@property (nonatomic) long long sampledBackgroundLuminanceLevel;
@property (nonatomic) long long shadowStyle;
@property (nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x0; long long x1; } renderingConfiguration;

- (id)_containerViewDescription;

@end
