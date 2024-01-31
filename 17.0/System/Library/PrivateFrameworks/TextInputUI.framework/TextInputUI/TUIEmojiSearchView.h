@class NSArray, TUIEmojiSearchTextField, UICollectionView, UIView, NSLayoutConstraint, UILayoutGuide;

@interface TUIEmojiSearchView : UIView {
    UIView *_searchTextFieldPortal;
    UIView *_bottomHalfContainerView;
    UIView *_predictionViewWrapperView;
    UIView *_resultsCollectionContainerView;
    NSArray *_sideBySideViewConstraints;
    NSArray *_textFieldOnTopConstraints;
    NSArray *_resultsCollectionWrapperConstraints;
    NSArray *_predictionWrapperConstraints;
    NSLayoutConstraint *_searchFieldToTop;
    NSLayoutConstraint *_searchFieldLeading;
    NSLayoutConstraint *_topToBottomPadding;
    UILayoutGuide *_predictionViewGuide;
    NSLayoutConstraint *_predictionWrapperLeading;
    NSLayoutConstraint *_predictionWrapperTop;
    NSLayoutConstraint *_predictionWrapperBottom;
    BOOL _useHorizontalLayout;
    double _previousInsets;
}

@property (readonly, nonatomic) TUIEmojiSearchTextField *searchTextField;
@property (retain, nonatomic) UICollectionView *resultsCollectionView;
@property (retain, nonatomic) UIView *predictionView;
@property (nonatomic) BOOL predictionViewVisible;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic) BOOL resultsViewVisible;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPredictionViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_didChangeHandBiasNotification:(id)a0;
- (id)_constraintsFromView:(id)a0 toContainerView:(id)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 identifier:(id)a3;
- (void)_createPredictionViewConstraints;
- (void)_createResultsViewConstraints;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_handBiasedEdgeInsets;
- (void)createConstraintsIfNeeded;
- (void)transitionToCompactLayout:(BOOL)a0;
- (void)updateInsetsIfNeeded:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
