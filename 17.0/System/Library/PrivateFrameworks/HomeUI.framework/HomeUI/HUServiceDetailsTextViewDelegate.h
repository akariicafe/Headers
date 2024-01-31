@class HUServiceDetailsItemManager, UIViewController, NSString;

@interface HUServiceDetailsTextViewDelegate : NSObject <UITextViewDelegate>

@property (weak, nonatomic) HUServiceDetailsItemManager *itemManager;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)dismissTextViewController;
- (void)displayPrivacyInformationWithIdentifier:(id)a0;
- (void)displayUnifiedPrivacyInformationWithIdentifiers:(id)a0;
- (id)privacyIdentifierForSectionIdentifier:(id)a0;
- (id)unifiedIdentifiersForSectionIdentifier:(id)a0;

@end
