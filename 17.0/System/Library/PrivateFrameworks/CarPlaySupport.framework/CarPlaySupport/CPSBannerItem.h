@class NSString, NSUUID, NSArray, CPImageSet;

@interface CPSBannerItem : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSArray *textVariants;
@property (readonly, nonatomic) NSArray *detailTextVariants;
@property (readonly, nonatomic) NSArray *attributedDetailTextVariants;
@property (readonly, nonatomic) CPImageSet *imageSet;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 textVariants:(id)a2 detailTextVariants:(id)a3 attributedDetailTextVariants:(id)a4 imageSet:(id)a5;
- (BOOL)isEqualToBannerItem:(id)a0;

@end
