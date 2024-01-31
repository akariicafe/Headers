@class _UIBackdropView, UITextField, NSString, UILabel, UIView;
@protocol CKTranscriptManagementNameFieldDelegate;

@interface CKTranscriptManagementNameField : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *fieldLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *topSeparator;
@property (retain, nonatomic) UIView *bottomSeparator;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (weak, nonatomic) id<CKTranscriptManagementNameFieldDelegate> delegate;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) BOOL isOverlay;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeight;

- (void)layoutMarginsDidChange;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)commitGroupName;

@end
