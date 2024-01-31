@class NSString, NSDictionary;

@interface NTKBundleComplicationMigrationTypeLookup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSDictionary *dictionary;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
