@class NSString;

@interface HKImproveSafetyDataCollectionViewController : OBTextWelcomeController {
    NSString *_baseAutomationIdentifier;
}

@property (copy, nonatomic) id /* block */ completion;

+ (id)localizedStringWithKey:(id)a0;
+ (BOOL)needsRequestedPermission;
+ (void)presentInViewController:(id)a0 completion:(id /* block */)a1;

- (id)localizedStringWithKey:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)shouldInlineButtonTray;
- (void)_disableDataCollection;
- (void)_enableDataCollection;
- (void)_setDataCollectionToNewValue:(BOOL)a0;
- (void)_showDataCollectionAdditionalInfo;
- (void)setUpButtons;
- (void)setUpContent;

@end
