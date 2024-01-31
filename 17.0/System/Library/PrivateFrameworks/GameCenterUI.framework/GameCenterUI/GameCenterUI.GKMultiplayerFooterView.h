@class NSString;

@interface GameCenterUI.GKMultiplayerFooterView : UIView {
    void /* unknown type, empty encoding */ buttonTitle;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ secondaryButton;
    void /* unknown type, empty encoding */ statusLabel;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ topSeparator;
    void /* unknown type, empty encoding */ startGameHandler;
    void /* unknown type, empty encoding */ inviteFriendsHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryButtonFocusGuide;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButtonFocusGuide;
}

@property (nonatomic) BOOL startGameButtonEnabled;
@property (nonatomic) BOOL inviteFriendsButtonEnabled;
@property (nonatomic) BOOL inviteFriendsButtonHidden;
@property (nonatomic, copy) NSString *primaryButtonTitle;
@property (nonatomic, copy) NSString *secondaryButtonTitle;
@property (nonatomic, copy) NSString *footerStatusString;
@property (nonatomic, copy) id /* block */ startGameHandler;
@property (nonatomic, copy) id /* block */ inviteFriendsHandler;

- (void)didTapButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureUsing:(id)a0;
- (void)didTapSecondaryButton:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)wantsMaterialBackgroundWithScrollOffset:(double)a0;

@end
