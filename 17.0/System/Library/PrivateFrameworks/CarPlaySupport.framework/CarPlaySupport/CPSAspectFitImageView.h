@class NSLayoutConstraint;

@interface CPSAspectFitImageView : UIImageView

@property (retain, nonatomic) NSLayoutConstraint *aspectConstraint;

- (void)_updateConstraints;
- (id)init;
- (void).cxx_destruct;
- (void)setImage:(id)a0;

@end
