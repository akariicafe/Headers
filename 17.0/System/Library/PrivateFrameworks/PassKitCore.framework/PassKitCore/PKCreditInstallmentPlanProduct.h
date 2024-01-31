@class NSDictionary, NSString, NSSet;

@interface PKCreditInstallmentPlanProduct : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *iconURLs;
@property (copy, nonatomic) NSDictionary *splashImageURLs;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *capacity;
@property (copy, nonatomic) NSString *color;
@property (nonatomic, getter=isUpgradeEligible) BOOL upgradeEligible;
@property (nonatomic) unsigned long long warrantyYears;
@property (copy, nonatomic) NSSet *features;
@property (copy, nonatomic) NSString *serialNumber;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_imageURLFromImageURLs:(id)a0 forScale:(double)a1 suffix:(id)a2;
- (id)iconURLForScale:(double)a0 suffix:(id)a1;
- (BOOL)isEqualToInstallmentPlanProduct:(id)a0;
- (id)splashImageURLForScale:(double)a0 suffix:(id)a1;

@end
