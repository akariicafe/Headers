@class NSData, NSString, NSDate, NSSet, NSMutableDictionary, CWFChannel, NSDictionary, CLLocation;

@interface CWFBSS : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *internal;
@property (readonly, copy, nonatomic) NSSet *properties;
@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) CWFChannel *channel;
@property (copy, nonatomic) NSDate *lastAssociatedAt;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSDate *AWDLRealTimeModeTimestamp;
@property (copy, nonatomic) NSData *DHCPServerID;
@property (copy, nonatomic) NSData *DHCPv6ServerID;
@property (copy, nonatomic) NSString *IPv4NetworkSignature;
@property (copy, nonatomic) NSString *IPv6NetworkSignature;
@property (copy, nonatomic) CWFChannel *colocated2GHzRNRChannel;
@property (copy, nonatomic) CWFChannel *colocated5GHzRNRChannel;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;

+ (id)supportedOSSpecificKeys;

- (id)DHCPv6ServerID;
- (void)setOSSpecificAttributes:(id)a0;
- (id)IPv4NetworkSignature;
- (id)OSSpecificAttributes;
- (void)setDHCPServerID:(id)a0;
- (id)channel;
- (id)JSONCompatibleKeyValueMap;
- (id)init;
- (id)OSSpecificValueForKey:(id)a0;
- (void)setChannel:(id)a0;
- (void)mergeWithBSS:(id)a0;
- (id)location;
- (void)setIPv4NetworkSignature:(id)a0;
- (id)properties;
- (id)coreWiFiSpecificAttributes;
- (id)lastAssociatedAt;
- (id)filteredBSSWithProperties:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)__keyForProperty:(long long)a0;
- (id)__coreWiFiSpecificProperties;
- (id)DHCPServerID;
- (id)filteredBSSWithProperties:(id)a0 OSSpecificKeys:(id)a1;
- (long long)__propertyForKey:(id)a0;
- (void)setCoreWiFiSpecificAttributes:(id)a0;
- (id)__filteredBSSWithProperties:(id)a0 includeRequiredProperties:(BOOL)a1 OSSpecificKeys:(id)a2;
- (id)AWDLRealTimeModeTimestamp;
- (id)__requiredProperties;
- (void)setOSSpecificValue:(id)a0 forKey:(id)a1;
- (id)colocated2GHzRNRChannel;
- (void).cxx_destruct;
- (void)setColocated5GHzRNRChannel:(id)a0;
- (id)IPv6NetworkSignature;
- (void)setDHCPv6ServerID:(id)a0;
- (void)setLastAssociatedAt:(id)a0;
- (BOOL)isEqualToBSS:(id)a0;
- (void)setLocation:(id)a0;
- (void)setColocated2GHzRNRChannel:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setBSSID:(id)a0;
- (void)setAWDLRealTimeModeTimestamp:(id)a0;
- (id)externalForm;
- (id)__defaultProperties;
- (id)initWithCoder:(id)a0;
- (void)setIPv6NetworkSignature:(id)a0;
- (id)colocated5GHzRNRChannel;
- (id)BSSID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExternalForm:(id)a0;

@end
