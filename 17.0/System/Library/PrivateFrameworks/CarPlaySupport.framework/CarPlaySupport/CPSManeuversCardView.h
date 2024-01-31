@class CPSCardPlatterView, NSArray, CPSHairlineView, CPSSecondaryManeuverView, NSString, CPSPrimaryManeuverView, NSMutableArray;

@interface CPSManeuversCardView : UIView <CPSNavigationDisplaying, CPSCardPlatterProviding, BSInvalidatable>

@property (retain, nonatomic) NSArray *maneuvers;
@property (retain, nonatomic) CPSPrimaryManeuverView *primaryManeuverView;
@property (retain, nonatomic) CPSSecondaryManeuverView *secondaryManeuverView;
@property (retain, nonatomic) NSMutableArray *activeConstraints;
@property (nonatomic) BOOL showSecondaryManeuverView;
@property (retain, nonatomic) CPSHairlineView *hairlineView;
@property (nonatomic) BOOL usesCustomBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CPSCardPlatterView *cardPlatterView;

- (void)_updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showManeuvers:(id)a0 usingDisplayStyles:(id)a1;
- (void)_updateHairlineBackgroundColor;
- (void)_updateSecondaryManeuverBackgroundColor;
- (BOOL)canFitSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithManeuvers:(id)a0;
- (void)updateEstimates:(id)a0 forManeuver:(id)a1;

@end
