@class NSArray, NSString, MUFeatureDiscoveryAnnotationView, MUCompositionalStackLayout, MUCompositionalStackLayoutGroup, MUGroupedActionsRowViewConfiguration;
@protocol MUPlaceCardActionsRowViewDelegate;

@interface MUGroupedActionsRowView : UIView <MUActionRowItemViewDelegate, MUActionRowItemViewModelObserver> {
    NSArray *_constraints;
    NSArray *_actionButtons;
    MUFeatureDiscoveryAnnotationView *_featureDiscoveryView;
    MUCompositionalStackLayout *_containerStackLayout;
    MUCompositionalStackLayoutGroup *_buttonLayoutGroup;
    MUGroupedActionsRowViewConfiguration *_configuration;
}

@property (readonly, nonatomic) long long preferredOrientation;
@property (readonly, nonatomic) long long preferredDistribution;
@property (weak, nonatomic) id<MUPlaceCardActionsRowViewDelegate> delegate;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) NSArray *actionButtons;
@property (copy, nonatomic) NSArray *viewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLayoutIfNeeded;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)_itemViewForViewModel:(id)a0;
- (void)_setupStackLayout;
- (id)_viewModelForItemView:(id)a0;
- (void)actionRowItemPresentedMenu:(id)a0;
- (void)actionRowItemSelected:(id)a0;
- (void)actionRowItemViewModelDidUpdate:(id)a0;
- (void)createActionViews;
- (void)didUpdateFeatureDiscoveryStatus:(id)a0;

@end
