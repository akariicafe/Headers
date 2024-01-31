@class UIColor, NSString, NSMutableIndexSet, NSMutableArray;

@interface UIPickerTableView : UITableView <UITableViewDelegate> {
    NSMutableIndexSet *_checkedRows;
    double _lastClickedOffset;
    UIColor *_textColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleRect;
    NSMutableArray *_referencingCells;
    struct { unsigned char allowsMultipleSelection : 1; unsigned char scrollingDirection : 2; unsigned char didSelectDisabled : 1; unsigned char skipRowChangeNotifications : 1; unsigned char scrollingForSelection : 1; unsigned char pickerViewImplementsSelectionBarChanged : 2; unsigned char cancellingAnimation : 1; unsigned char updatingContentInset : 1; } _pickerTableFlags;
}

@property (nonatomic, setter=_setSelectionBarRow:) long long selectionBarRow;
@property (nonatomic) BOOL generatorActivated;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionBarRect;
@property (nonatomic) long long lastSelectedRow;
@property (getter=_playsFeedback, setter=_setPlaysFeedback:) BOOL playsFeedback;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isInternalTableView;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_beginTrackingWithEvent:(id)a0;
- (BOOL)selectRow:(long long)a0 animated:(BOOL)a1 notify:(BOOL)a2;
- (void)dealloc;
- (void)_notifyContentOffsetChange;
- (id)_containerView;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)selectRow:(long long)a0 animated:(BOOL)a1 notify:(BOOL)a2 updateChecked:(BOOL)a3;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (long long)_contentInsetAdjustmentBehavior;
- (void)_updateContentInsets;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldWrapCells;
- (void)_setContentOffset:(struct CGPoint { double x0; double x1; })a0 notify:(BOOL)a1;
- (BOOL)didSelectDisabled:(BOOL)a0;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)a0 animated:(BOOL)a1;
- (id)_pickerView;
- (void)_playClickIfNecessary;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_anyDateLabel;
- (void).cxx_destruct;
- (void)_deactivateFeedbackGeneratorIfNeeded;
- (void)_scrollViewDidInterruptDecelerating:(id)a0;
- (void)_rectChangedWithNewSize:(struct CGSize { double x0; double x1; })a0 oldSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionBarRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_scrollViewAnimationEnded:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_scrollingFinished;
- (BOOL)isRowChecked:(long long)a0;
- (void)layoutSubviews;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForCellAtY:(double)a0;
- (id)_checkedRows;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (struct CGPoint { double x0; double x1; })contentOffsetForRowAtIndexPath:(id)a0;

@end
