@class UIColor, NSString, UIColorPickerViewController, UIDragInteraction, _UIColorWellVisualStyle, UIDropInteraction;
@protocol _UIColorWellDelegate;

@interface UIColorWell : UIControl <UIDragInteractionDelegate, UIDropInteractionDelegate, _UIColorPickerViewControllerDelegate, _UIColorWellControl> {
    _UIColorWellVisualStyle *_style;
    UIColorPickerViewController *_colorPicker;
    UIDragInteraction *_dragInteraction;
    UIDropInteraction *_dropInteraction;
}

@property (weak, nonatomic) id<_UIColorWellDelegate> _delegate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL supportsAlpha;
@property (retain, nonatomic) UIColor *selectedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleForColorWell:(id)a0;

- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)_populateArchivedSubviews:(id)a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setPickerTitle:(id)a0;
- (void)_colorPickerViewControllerDidDeselectColor:(id)a0;
- (void)_colorPickerViewControllerDidHideEyedropper:(id)a0;
- (void)_colorPickerViewControllerDidShowEyedropper:(id)a0;
- (void)_setSelectedColor:(id)a0 notifyingStyle:(BOOL)a1 notifyingUIPicker:(BOOL)a2 sendingAction:(BOOL)a3;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)styleDidSelectColor:(id)a0;
- (void)styleRequestedColorPickerPresentation;

@end
