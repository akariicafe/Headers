@class PXExtendedTraitCollection, UIViewController, PXStoryConfiguration;

@interface PXStoryViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) PXStoryConfiguration *configuration;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (weak, nonatomic) UIViewController *containerViewController;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConfiguration:(id)a0 extendedTraitCollection:(id)a1;

@end
