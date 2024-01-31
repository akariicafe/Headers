@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {
    NSString *_title;
    NSString *_body;
}

- (id)bodyText;
- (void).cxx_destruct;
- (id)title;
- (void)setBodyText:(id)a0;
- (void)setTitle:(id)a0;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)dismissButtonText;
- (id)initWithTitle:(id)a0 body:(id)a1;
- (void)performUnlockAction;
- (BOOL)suppressForKeynote;

@end
