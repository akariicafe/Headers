@interface GKComposeHeaderFieldBackgroundView : UIImageView

@property (nonatomic) unsigned int location;

- (id)init;
- (void)layoutSubviews;
- (void)resetBackgroundImage;

@end
