@class UIView;

@interface _EXHostView : UIView

@property (retain) UIView *embededView;
@property float horizontalContentCompressionResistancePriority;
@property float verticalContentCompressionResistancePriority;

- (void).cxx_destruct;
- (void)setContentCompressionResistancePriority:(float)a0 forAxis:(long long)a1;
- (void)embedView:(id)a0;

@end
