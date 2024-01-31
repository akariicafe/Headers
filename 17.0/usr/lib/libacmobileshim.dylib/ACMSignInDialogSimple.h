@class UIColor, NSString, UITextView, UIImage, UIView, UIButton;
@protocol ACMSignInDialogDelegate;

@interface ACMSignInDialogSimple : ACMSignInDialog <ACMSignInDialogSimpleProtocol> {
    UITextView *_licenseTextField;
}

@property (retain) UIColor *licenseTextColor;
@property (retain, nonatomic) UIView *backgroudView;
@property (readonly, nonatomic) unsigned long long verticalShift;
@property (readonly, nonatomic) UIButton *loginButton;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImage *logo;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSString *accountNameFieldPlaceholder;
@property id<ACMSignInDialogDelegate> delegate;
@property (retain, nonatomic) NSString *requestedUserName;
@property (readonly) NSString *userNameString;
@property NSString *passwordString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
