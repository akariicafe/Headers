@class _NSAttributedStringGrammarInflection;
@protocol IPInflectionSettingsViewControllerDelegate;

@interface IPInflectionSettingsViewController : PSListController

@property (retain, nonatomic) _NSAttributedStringGrammarInflection *inflection;
@property BOOL canShareInflection;
@property (weak, nonatomic) id<IPInflectionSettingsViewControllerDelegate> delegate;

+ (id)pronounDisplayStringForInflection:(id)a0;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)setThirdPartyCanAccessUserInflection:(id)a0 specifier:(id)a1;
- (id)thirdPartyCanAccessUserInflection;

@end
