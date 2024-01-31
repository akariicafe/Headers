@class NSArray, NSMutableSet, PSSpecifier;

@interface TIFuzzyPinyinController : PSListController

@property (retain, nonatomic) PSSpecifier *fuzzyPinyinSpecifier;
@property (retain, nonatomic) NSMutableSet *fuzzyPinyinPairs;
@property (copy, nonatomic) NSArray *fuzzyPinyinPairSpecifiers;

- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (id)keyboardPreferenceValue:(id)a0;
- (id)readFuzzyPinyinPairs;
- (void)setKeyboardPreferenceValue:(id)a0 forSpecifier:(id)a1;

@end
