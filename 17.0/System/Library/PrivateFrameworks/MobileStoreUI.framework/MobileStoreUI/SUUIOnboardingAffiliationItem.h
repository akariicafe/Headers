@class UIColor, NSString, NSURL;

@interface SUUIOnboardingAffiliationItem : NSObject <NSCopying>

@property (copy, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *imageTreatment;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long userAffinityCount;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
