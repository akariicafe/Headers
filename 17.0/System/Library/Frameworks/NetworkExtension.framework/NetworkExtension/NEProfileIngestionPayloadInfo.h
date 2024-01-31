@class NSString, NSDate;

@interface NEProfileIngestionPayloadInfo : NSObject <NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *payloadProtocolType;
@property (copy) NSString *payloadUUID;
@property (copy) NSString *payloadOrganization;
@property (copy) NSString *profileOrganization;
@property (copy) NSString *profileIdentifier;
@property (copy) NSString *profileUUID;
@property (copy) NSDate *profileIngestionDate;
@property (copy) NSString *systemVersion;
@property BOOL isSetAside;
@property long long profileSource;

- (id)initFromLegacyDictionary:(id)a0;
- (id)init;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
