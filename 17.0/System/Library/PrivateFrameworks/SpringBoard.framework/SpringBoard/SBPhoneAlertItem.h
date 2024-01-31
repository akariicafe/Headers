@class NSString;

@interface SBPhoneAlertItem : SBAlertItem {
    NSString *_bodyText;
    NSString *_title;
}

@property (readonly, nonatomic) long long slot;

- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithTitle:(id)a0 bodyText:(id)a1 slot:(long long)a2;

@end
