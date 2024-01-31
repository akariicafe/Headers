@class NSString, NTKContainerView;

@interface NTKUtilityCircularComplicationView : NTKUtilityComplicationView <NTKContainerViewLayoutDelegate>

@property (readonly, nonatomic) NTKContainerView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)layoutOverride;

- (void)_layoutContentView;
- (void)layoutContainerView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateEditingRotationAngle;
- (void)setEditingRotationAngle:(double)a0;

@end
