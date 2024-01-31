@class UIViewController, PXFeedConfiguration, PXExtendedTraitCollection;

@interface PXFeedViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) PXFeedConfiguration *feedConfiguration;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (weak, nonatomic) UIViewController *containerViewController;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeedConfiguration:(id)a0 extendedTraitCollection:(id)a1;

@end
