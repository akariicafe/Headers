@class NSString, _SearchBarContent;
@protocol HKIncrementalSearchBarDelegate;

@interface HKIncrementalSearchBar : UIView

@property (readonly, nonatomic) _SearchBarContent *searchBarContent;
@property (retain, nonatomic) id<HKIncrementalSearchBarDelegate> searchBarDelegate;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *matchDisplayText;

+ (BOOL)_hasUppercaseCharacters:(id)a0;
+ (id)_patternFromSearchString:(id)a0 quoteForJavascript:(BOOL)a1;
+ (id)regularExpressionFromString:(id)a0 quoteForJavascript:(BOOL)a1 caseless:(BOOL *)a2;

- (id)inputAccessoryView;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)keyboardIsUp;
- (BOOL)searchIsActive;
- (void)doneAction:(id)a0;
- (void)activateSearch:(BOOL)a0;
- (void)setDownEnabled:(BOOL)a0;
- (void)_lowerKeyboard;
- (BOOL)keyboardIsDown;
- (void)searchKeyboardDidHide:(id)a0;
- (void)setMatchDisplayVisible:(BOOL)a0;
- (void)setUpEnabled:(BOOL)a0;

@end
