@class NSString, NSDictionary;

@interface NTKBundleComplicationIdentifierCacheModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSDictionary *dataSourceToBundleIdentifier;
@property (copy, nonatomic) NSDictionary *legacyComplicationTypeToDataSourceIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBuildVersion:(id)a0;

@end
