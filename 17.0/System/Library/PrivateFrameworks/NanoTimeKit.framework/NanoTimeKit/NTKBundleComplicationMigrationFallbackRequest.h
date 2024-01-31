@class NSArray, CLKDevice, NTKComplication;

@interface NTKBundleComplicationMigrationFallbackRequest : NTKBundleComplicationMigrationRequest <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NTKComplication *complication;
@property (readonly, nonatomic) NSArray *families;
@property (readonly, nonatomic) CLKDevice *device;

+ (id)requestWithComplication:(id)a0 families:(id)a1 device:(id)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
