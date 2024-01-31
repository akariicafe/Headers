@class UIView, _UIMorphingPlatterView, UITargetedPreview;

@interface _UIGravityWellEffectBody : NSObject

@property (retain, nonatomic) UITargetedPreview *preview;
@property (retain, nonatomic) _UIMorphingPlatterView *effectView;
@property (retain, nonatomic) UIView *anchorView;
@property (nonatomic) struct CAPoint3D { double x; double y; double z; } positionInPrimaryContainer;
@property (nonatomic) double distanceFromPrimaryBody;

- (id)description;
- (void).cxx_destruct;

@end
