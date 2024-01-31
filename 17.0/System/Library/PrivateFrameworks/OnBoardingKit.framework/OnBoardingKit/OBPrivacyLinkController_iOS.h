@class UIImageView, UITextView, OBPrivacyLinkButton;

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {
    OBPrivacyLinkButton *_linkButton;
    BOOL bundleTitlesMatch;
    BOOL bundlesIncludePII;
}

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;

- (void)processBundlesForTitleInformation;
- (void)loadView;
- (id)initWithPrivacyBundle:(id)a0;
- (id)initWithBundleIdentifiers:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)setLinkEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setUnderlineLinks:(BOOL)a0;
- (void)setCustomTintColor:(id)a0;

@end
