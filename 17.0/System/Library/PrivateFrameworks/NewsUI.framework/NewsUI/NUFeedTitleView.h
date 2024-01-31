@class NSString, NUTitleView, NSMutableArray, NUTitleViewUpdate;
@protocol NUFeedTitleViewDelegate, NUTitleViewStyler;

@interface NUFeedTitleView : UIView <NUTitleViewDelegate>

@property (retain, nonatomic) NUTitleViewUpdate *lastQueuedTitleViewUpdate;
@property (readonly, nonatomic) NSMutableArray *titleViewUpdateStack;
@property (retain, nonatomic) id<NUTitleViewStyler> styler;
@property (weak, nonatomic) id<NUFeedTitleViewDelegate> delegate;
@property (readonly, nonatomic) NUTitleView *titleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)titleViewUpdateForFeedTitleViewUpdate:(id)a0 force:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)popApplyFeedTitleViewUpdateWithAnimation:(unsigned long long)a0 force:(BOOL)a1;
- (unsigned long long)titleViewAnimationForAnimation:(unsigned long long)a0;
- (void)applyTitleViewUpdate:(id)a0 animation:(unsigned long long)a1;
- (void)applyFeedTitleViewUpdate:(id)a0 animation:(unsigned long long)a1;
- (void)titleViewDidTapOnTitleView:(id)a0;
- (void).cxx_destruct;
- (void)popApplyFeedTitleViewUpdateWithAnimation:(unsigned long long)a0;
- (void)pushApplyFeedTitleViewUpdate:(id)a0 animation:(unsigned long long)a1 force:(BOOL)a2;
- (void)relayoutWithAnimation:(BOOL)a0;
- (void)layoutSubviews;
- (void)applyFeedTitleViewUpdate:(id)a0 animation:(unsigned long long)a1 force:(BOOL)a2;
- (BOOL)useCompactTitleViewUpdates;
- (void)pushApplyFeedTitleViewUpdate:(id)a0 animation:(unsigned long long)a1;

@end
