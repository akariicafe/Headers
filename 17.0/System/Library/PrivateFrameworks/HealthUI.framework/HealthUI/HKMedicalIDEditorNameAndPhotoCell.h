@class NSString, UIImage, UIView, UIButton;

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell <UITextViewDelegate> {
    UIView *_nameBottomSeparator;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *photo;
@property (readonly, nonatomic) UIButton *editPhotoButton;
@property (readonly, nonatomic) UIButton *editPhotoLabelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showsLabelAndValue;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)_adjustEditPhotoButtonFontSizeIfNecessary;
- (void)_largeTextLayoutSubviews;
- (void)_regularLayoutSubviews;

@end
