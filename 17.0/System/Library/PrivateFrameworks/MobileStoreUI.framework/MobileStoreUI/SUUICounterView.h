@class NSObject, NSString, SUUIImageView, NSNumberFormatter, SUUICounterViewElement, UILabel, SUUICounterTimeView;
@protocol OS_dispatch_source;

@interface SUUICounterView : SUUIViewReuseView <SUUIViewElementView> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    SUUICounterViewElement *_counterElement;
    SUUIImageView *_imageView;
    NSNumberFormatter *_numberFormatter;
    UILabel *_numberView;
    SUUICounterTimeView *_timeView;
    NSObject<OS_dispatch_source> *_updateTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)didMoveToSuperview;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)_stopUpdateTimer;
- (void).cxx_destruct;
- (void)_startUpdateTimer;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_addNumberViewWithViewElement:(id)a0 context:(id)a1;
- (void)_addTimeViewWithViewElement:(id)a0 context:(id)a1;
- (void)_reloadNumberValue;
- (void)_reloadUpdateTimer;
- (void)_updateTimerAction;
- (unsigned long long)_visibleTimeFieldsForDateFormat:(long long)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
