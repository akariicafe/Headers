@class NSSet, NSDateComponents;

@interface USDeviceActivityEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSSet *applicationTokens;
@property (readonly, copy) NSSet *categoryTokens;
@property (readonly, copy) NSSet *webDomainTokens;
@property (readonly, copy) NSSet *bundleIdentifiers;
@property (readonly, copy) NSSet *categoryIdentifiers;
@property (readonly, copy) NSSet *webDomains;
@property (readonly, copy) NSDateComponents *threshold;
@property (readonly) BOOL includesAllActivity;
@property (readonly) BOOL isUntokenized;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationTokens:(id)a0 categoryTokens:(id)a1 webDomainTokens:(id)a2 threshold:(id)a3;
- (id)initWithBundleIdentifiers:(id)a0 categoryIdentifiers:(id)a1 webDomains:(id)a2 threshold:(id)a3;

@end
