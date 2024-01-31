@class NSString;

@interface PKFeatureApplicationOfferDetailsInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *primaryActionTitle;
@property (copy, nonatomic) NSString *secondaryActionTitle;
@property (copy, nonatomic) NSString *disclosureTitle;
@property (copy, nonatomic) NSString *heroImageURL;
@property (nonatomic) unsigned long long layout;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
