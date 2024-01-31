@class NSString;

@interface SGPSInteractionLookup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *detail;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)interactionInformation;
- (id)initWithDetail:(id)a0;
- (id)interactionString;
- (BOOL)isEqualToPSInteractionLookup:(id)a0;
- (id)resolveAppNameForBundleId:(id)a0;
- (id)resourceBundle;

@end
