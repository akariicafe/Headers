@class NSString, UIDocumentPasswordField, NSObject, UILabel;
@protocol UIDocumentPasswordViewDelegate;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {
    UILabel *_label;
}

@property (nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
@property (readonly, nonatomic) UIDocumentPasswordField *passwordField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)textFieldDidBeginEditing:(id)a0;
- (id)_labelFont;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)_canDrawContent;
- (void)layoutSubviews;
- (id)_labelTextColor;
- (double)_textFieldWidth;
- (double)_labelHorizontalOffset;
- (void)_passwordEntered:(id)a0;
- (id)initWithDocumentName:(id)a0;

@end
