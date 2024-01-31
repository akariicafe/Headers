@class UILabel;

@interface MenstrualCyclesAppPlugin.LoggingCardCarouselViewController : UIViewController <UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ loggingCards;
    void /* unknown type, empty encoding */ userPreferredUnit;
    void /* unknown type, empty encoding */ mutableDaySummary;
    void /* unknown type, empty encoding */ originalDaySummary;
    void /* unknown type, empty encoding */ selectedDataType;
    void /* unknown type, empty encoding */ hasCollectionViewFocusedInitialCard;
    void /* unknown type, empty encoding */ collectionViewFlowLayout;
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ unhiddenDataTypes;
    void /* unknown type, empty encoding */ mostRecentBasalBodyTemperature;
    void /* unknown type, empty encoding */ recentSymptoms;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ indexOfCellBeforeDragging;
    void /* unknown type, empty encoding */ contentOffsetXBeforeDragging;
    void /* unknown type, empty encoding */ loggingCardValidationResult;
    void /* unknown type, empty encoding */ loggingCardCarouselViewControllerDelegate;
    void /* unknown type, empty encoding */ temperatureFormatter;
    void /* unknown type, empty encoding */ editOrdering;
    void /* unknown type, empty encoding */ cardProgressLabelToCollectionViewConstraint;
    void /* unknown type, empty encoding */ collectionViewHeightAnchorConstraint;
    void /* unknown type, empty encoding */ collectionViewToDateLabelConstraint;
    void /* unknown type, empty encoding */ containerViewCenterYConstraint;
    void /* unknown type, empty encoding */ doneButtonWidthConstraint;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ backgroundBlurView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateLabelBackgroundVibrancyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardProgressLabelBackgroundVibrancyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardProgressLabel;
    void /* unknown type, empty encoding */ doneButtonBackgroundVibrancyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneLabel;
}

@property (nonatomic, readonly) UILabel *axCardProgressLabel;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)respondToContentSizeChanges;
- (void)respondToHorizontalSizeClassChanges;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)doneTapped:(id)a0;

@end
