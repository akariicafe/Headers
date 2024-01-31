@class NSArray;

@interface AssistantIntentsController : PSListController <SiriAppsFooterViewDelegate>

@property (retain, nonatomic) NSArray *intentsSpecifiers;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void).cxx_destruct;
- (id)accesssForSpecifier:(id)a0;
- (void)setAccess:(id)a0 forSpecifier:(id)a1;
- (void)_fetchIntentsSpecifiersWithCompletion:(id /* block */)a0;
- (void)tccPreferencesChanged;
- (void)viewDidTapLearnMore:(id)a0;

@end
