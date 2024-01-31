@class NSString;

@interface STDynamicActivityAttribution : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizationKey;
@property (readonly, copy, nonatomic) NSString *formattedString;
@property (readonly, copy, nonatomic) NSString *website;
@property (readonly, nonatomic) struct { unsigned int val[8]; } clientAuditToken;
@property (readonly, copy, nonatomic) NSString *clientExecutablePath;
@property (readonly, nonatomic) struct { unsigned int val[8]; } maskingClientAuditToken;
@property (readonly, copy, nonatomic) NSString *maskingClientExecutablePath;

+ (id)attributionForClientAuditToken:(struct { unsigned int x0[8]; })a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 clientExecutablePath:(id)a2 maskingClientExecutablePath:(id)a3 localizationKey:(id)a4;
+ (id)attributionForClientAuditToken:(struct { unsigned int x0[8]; })a0 clientExecutablePath:(id)a1 bundleID:(id)a2 localizationKey:(id)a3;
+ (id)attributionForClientAuditToken:(struct { unsigned int x0[8]; })a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 clientExecutablePath:(id)a2 maskingClientExecutablePath:(id)a3 stringWithFormat:(id)a4;
+ (id)attributionForClientAuditToken:(struct { unsigned int x0[8]; })a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 clientExecutablePath:(id)a2 maskingClientExecutablePath:(id)a3 website:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
