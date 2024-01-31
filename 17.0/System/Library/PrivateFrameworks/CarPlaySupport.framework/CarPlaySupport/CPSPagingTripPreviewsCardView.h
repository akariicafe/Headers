@class CPSRouteOverviewView, NSMutableDictionary, CPSHairlineBorderedView, UIButton, NSLayoutConstraint, NSString, CPSPagingControlView;

@interface CPSPagingTripPreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting, CPSPageControlling>

@property (readonly, nonatomic) NSMutableDictionary *estimatesForTripIdentifiers;
@property (readonly, nonatomic) CPSPagingControlView *pageControl;
@property (readonly, nonatomic) CPSRouteOverviewView *overviewView;
@property (readonly, nonatomic) CPSHairlineBorderedView *borderedAlternatesView;
@property (readonly, nonatomic) CPSHairlineBorderedView *borderedGoButton;
@property (readonly, nonatomic) CPSHairlineBorderedView *borderedMoreRoutesButton;
@property (readonly, nonatomic) UIButton *moreRoutesButton;
@property (nonatomic) BOOL showMoreRoutes;
@property (retain, nonatomic) NSLayoutConstraint *contentTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *alternateRoutesHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toggleRoutesButtonHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)_toggleMoreRoutesButtonPressed:(id)a0;
- (id)_linearFocusItems;
- (void)_setOverviewCollapsed:(BOOL)a0;
- (void)_updateButtonColors;
- (void)alternateRoutesView:(id)a0 didSelectRouteChoice:(id)a1;
- (id)initWithTripDelegate:(id)a0 trips:(id)a1 textConfiguration:(id)a2;
- (void)pagingControlView:(id)a0 didSelectPageIndex:(unsigned long long)a1;
- (void)setSelectedRouteChoice:(id)a0;
- (void)setSelectedTrip:(id)a0;
- (void)updateEstimates:(id)a0 forTripIdentifier:(id)a1;

@end
