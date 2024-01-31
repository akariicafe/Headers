@class NSArray, NSString;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL noRestriction;
@property (retain) NSArray *cachedMachOUUIDs;
@property (copy) NSArray *matchAccountIdentifiers;
@property BOOL noDivertDNS;
@property (readonly) NSString *matchSigningIdentifier;
@property (readonly) NSString *matchDesignatedRequirement;
@property (copy) NSString *matchPath;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *matchTools;

- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (void)dealloc;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSigningIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)overlapsWithRule:(id)a0;
- (BOOL)signingIdentifierAllowed:(id)a0 domainsOrAccountsRequired:(out BOOL *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
