@class NSString, DBSDisplayZoomOptionView;
@protocol DBSDisplayZoomTableViewCellDelegate;

@interface DBSDisplayZoomTableViewCell : UITableViewCell <DBSDisplayZoomOptionViewDelegate>

@property (retain, nonatomic) DBSDisplayZoomOptionView *standardOptionView;
@property (retain, nonatomic) DBSDisplayZoomOptionView *zoomedOptionView;
@property (retain, nonatomic) DBSDisplayZoomOptionView *denseOptionView;
@property (retain, nonatomic) DBSDisplayZoomOptionView *denserOptionView;
@property (weak, nonatomic) id<DBSDisplayZoomTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)_configureForLegacy;
- (void)_configureForThreeDisplayOptionsWithLeadingView:(id)a0 middleView:(id)a1 trailingView:(id)a2;
- (void)_configureForTwoDisplayOptionsWithLeadingView:(id)a0 trailingView:(id)a1;
- (id)_optionViewsByDensity;
- (void)configureView;
- (void)updateSelectedViewWithOption:(unsigned long long)a0;
- (void)userDidTapOnDisplayZoomOptionView:(id)a0;

@end
