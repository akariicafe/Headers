@class NSArray, NSString, MUScrollableStackView, MURatingsCallToActionViewModel, MUHairlineView;
@protocol MUScrollAnalyticActionObserving, MUPlaceRibbonViewDelegate;

@interface MUPlaceRibbonView : UIView <UIScrollViewDelegate> {
    MUScrollableStackView *_contentStackView;
    MURatingsCallToActionViewModel *_callToActionViewModel;
    struct CGPoint { double x; double y; } _beginAnalyticsScrollingPoint;
    MUHairlineView *_topHairline;
    MUHairlineView *_bottomHairline;
}

@property (readonly, nonatomic) BOOL showTopAndBottomSeparators;
@property (weak, nonatomic) id<MUScrollAnalyticActionObserving> analyticsDelegate;
@property (weak, nonatomic) id<MUPlaceRibbonViewDelegate> delegate;
@property (retain, nonatomic) NSArray *viewModels;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_updateAppearance;
- (void)_setupStackView;
- (id)_visibleRibbonItemViews;
- (void)reloadVisibility;

@end
