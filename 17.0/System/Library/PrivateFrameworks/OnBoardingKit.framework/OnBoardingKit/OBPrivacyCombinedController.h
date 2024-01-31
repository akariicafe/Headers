@class UIColor, NSString;

@interface OBPrivacyCombinedController : OBTableWelcomeController

@property (retain, nonatomic) UIColor *customTintColor;
@property (nonatomic) BOOL underlineLinks;
@property BOOL allowsOpeningSafari;
@property (retain) NSString *displayLanguage;
@property BOOL presentedFromPrivacyPane;

+ (id)new;
+ (void)presentPrivacyCombinedControllerOverController:(id)a0 dismissHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithBundles:(id)a0;

@end
