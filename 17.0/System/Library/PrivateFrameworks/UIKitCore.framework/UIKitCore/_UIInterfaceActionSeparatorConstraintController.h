@class NSLayoutConstraint, UIView;
@protocol UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying;

@interface _UIInterfaceActionSeparatorConstraintController : NSObject

@property (readonly, weak, nonatomic) UIView<UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> *separatorView;
@property (readonly, nonatomic) NSLayoutConstraint *fixedHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *fixedWidthConstraint;
@property (nonatomic) long long constantSizedAxis;
@property (nonatomic) double constantAxisDimension;

- (void).cxx_destruct;
- (void)_updateConstantSizedConstraints;
- (BOOL)_isFixedWidth;
- (id)initWithSeparatorView:(id)a0;
- (void)separatorViewDidUpdateConstraints;

@end
