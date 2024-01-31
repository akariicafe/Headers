@class NSString, NSLayoutConstraint;

@interface _SFTranslationTargetLocaleAlertActionContentViewController : UIViewController {
    NSString *_localeIdentifier;
    NSLayoutConstraint *_topTextPaddingConstraint;
    NSLayoutConstraint *_bottomTextPaddingConstraint;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithLocaleIdentifier:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)_updateVerticalPadding;

@end
