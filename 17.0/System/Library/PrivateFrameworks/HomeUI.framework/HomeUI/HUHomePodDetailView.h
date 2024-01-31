@class UIImageView, UILabel, UIView;
@protocol HFStringGenerator, HUHomePodDetailViewDelegate;

@interface HUHomePodDetailView : UIButton

@property (nonatomic) BOOL isAnimatingPop;
@property (readonly, nonatomic) UIImageView *unitBadgeLabel;
@property (copy, nonatomic) id<HFStringGenerator> unitName;
@property (readonly, nonatomic) unsigned long long mediaSystemRole;
@property (readonly, nonatomic) UILabel *unitNameLabel;
@property (readonly, nonatomic) UIView *unitImageView;
@property (weak, nonatomic) id<HUHomePodDetailViewDelegate> delegate;

- (void)setUnitName:(id)a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (id)unitName;
- (void)_speakerTapped;
- (void)_updateImagesForRole;
- (id)initWithRole:(unsigned long long)a0 variant:(unsigned long long)a1;

@end
