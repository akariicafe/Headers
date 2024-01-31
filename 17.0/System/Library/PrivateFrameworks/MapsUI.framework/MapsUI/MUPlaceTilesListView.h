@class NSArray, NSString;
@protocol MUPlaceTilesListViewDelegate;

@interface MUPlaceTilesListView : MUPlaceVerticalCardContainerView <MUPlaceVerticalCardContainerViewDelegate>

@property (retain, nonatomic) NSArray *viewModels;
@property (weak, nonatomic) id<MUPlaceTilesListViewDelegate> listFeedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateAppearance;
- (void)verticalCardContainerView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)verticalCardContainerView:(id)a0 shouldHighlightRowAtIndex:(unsigned long long)a1;

@end
