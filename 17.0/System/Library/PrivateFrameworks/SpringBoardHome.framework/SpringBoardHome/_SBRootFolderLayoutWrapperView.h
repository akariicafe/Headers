@class UIView;

@interface _SBRootFolderLayoutWrapperView : SBFTouchPassThroughView

@property (nonatomic) double statusBarHeightAdjustment;
@property (nonatomic) double headerOffset;
@property (nonatomic) struct CGSize { double width; double height; } extendedSize;
@property (retain, nonatomic) UIView *wrappedView;

- (void)_updateLayout;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)layoutSubviews;

@end
