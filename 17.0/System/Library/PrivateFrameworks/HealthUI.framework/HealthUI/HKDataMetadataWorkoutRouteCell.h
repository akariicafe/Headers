@class UIImageView, NSLayoutConstraint, UIActivityIndicatorView;
@protocol HKDataMetadataWorkoutRouteCellDelegate;

@interface HKDataMetadataWorkoutRouteCell : UITableViewCell

@property (weak, nonatomic) id<HKDataMetadataWorkoutRouteCellDelegate> delegate;
@property (retain, nonatomic) UIImageView *routeImageView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (id)init;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)_handleDidUpdateTraitCollection;
- (void)setRouteImage:(id)a0;

@end
