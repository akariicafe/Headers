@class NSString, UITextField;
@protocol SearchUIKeyboardableTableViewDelegate;

@interface SearchUIKeyboardableCollectionViewController : UICollectionViewController <UIGestureRecognizerDelegate>

@property (nonatomic) double currentKeyboardHeight;
@property (nonatomic) double additionalKeyboardHeight;
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (weak, nonatomic) UITextField *textField;
@property (weak) id<SearchUIKeyboardableTableViewDelegate> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectHighlightedRow;
- (double)contentHeight;
- (void)highlightRowAtIndexPath:(id)a0;
- (void)keyboardFrameChanged:(id)a0;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (double)adjustedVerticalOffset;
- (id)init;
- (BOOL)contentIsTallEnoughToBeOccludedByCurrentKeyboardHeightAndTextField;
- (void)addKeyCommandForKey:(id)a0 action:(SEL)a1;
- (void)scrollIndexPathToVisible:(id)a0;
- (void)moveCursorToPosition:(id)a0;
- (void)selectAllTextInTextField;
- (void)downArrowPressed:(id)a0;
- (BOOL)canHighlightRowAtIndexPath:(id)a0;
- (void)moveCursorToEnd;
- (void)escapeButtonPressed;
- (void)upArrowPressed:(id)a0;
- (void)returnKeyPressed;
- (void)deletePressed;
- (void)highlightNextRowAtIndexPath:(id)a0 upward:(BOOL)a1;
- (void)moveCursorToBeginning;
- (id)indexPathForNextSelectableIndexPath:(id)a0 upward:(BOOL)a1;
- (void)rightArrowPressed;
- (void)leftArrowPressed;
- (BOOL)isOnCard;
- (void)showKeyboard;
- (void)viewDidLoad;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)goBack;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)setCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;

@end
