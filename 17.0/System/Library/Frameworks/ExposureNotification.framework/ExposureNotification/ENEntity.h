@class NSString, NSArray, NSNumber, ENRegion;

@interface ENEntity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *agencyColor;
@property (readonly, copy, nonatomic) NSNumber *agencyHeaderStyle;
@property (readonly, copy, nonatomic) NSArray *agencyHeaderTextColor;
@property (readonly, copy, nonatomic) NSString *localizedAgencyName;
@property (readonly, copy, nonatomic) NSString *localizedAgencyTurndownMessage;
@property (readonly, copy, nonatomic) NSString *localizedAgencyImageURL;
@property (readonly, copy, nonatomic) NSString *localizedRegionName;
@property (readonly, copy, nonatomic) ENRegion *region;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleID:(id)a0 agencyColor:(id)a1 agencyHeaderStyle:(id)a2 agencyHeaderTextColor:(id)a3 localizedAgencyName:(id)a4 localizedAgencyImageURL:(id)a5 localizedAgencyTurndownMessage:(id)a6 localizedRegionName:(id)a7 region:(id)a8;
- (id)initWithBundleID:(id)a0 region:(id)a1;

@end
