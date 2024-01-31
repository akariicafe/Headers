@class ASCLockupRequest, ASCLockupView;

@interface SSRecommendedCarrierAppCell : UITableViewCell {
    ASCLockupRequest *_request;
}

@property (retain, nonatomic) ASCLockupView *lockupView;

+ (id)sharedLockupViewGroup;

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_dummyArtwork;
- (id)_dummyLockup;
- (void)setLockupRequest:(id)a0 withDelegate:(id)a1;

@end
