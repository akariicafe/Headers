@class NSString, OBTrayButton;
@protocol AAUIOBWelcomeControllerDelegate;

@interface AAUIOBWelcomeController : OBWelcomeController {
    NSString *_helpLinkURL;
}

@property (retain, nonatomic) OBTrayButton *primaryButton;
@property (retain, nonatomic) OBTrayButton *secondaryButton;
@property (weak, nonatomic) id<AAUIOBWelcomeControllerDelegate> delegate;

- (id)initWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)_addPrimaryButtonWithViewModel:(id)a0;
- (void)_addSecondaryViewWithViewModel:(id)a0;
- (void)_addBulletedListItems:(id)a0;
- (void)_addContentViewWithViewModel:(id)a0;
- (void)_addHelpLinkButtonWithViewModel:(id)a0;
- (void)_addSecondaryButtonWithViewModel:(id)a0;
- (void)_delegate_welcomeViewControllerDidCompleteWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_openHelpLink;

@end
