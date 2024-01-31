@class NSString, DDSAssetPolicy;

@interface DDSAssertDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *assertionIdentifier;
@property (retain, nonatomic) DDSAssetPolicy *policy;

- (id)init;
- (unsigned long long)hash;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPolicy:(id)a0 assertionID:(id)a1 clientID:(id)a2;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDescriptor:(id)a0;
- (id)initWithCoder:(id)a0;

@end
