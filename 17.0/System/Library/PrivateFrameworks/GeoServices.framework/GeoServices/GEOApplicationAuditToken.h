@class NSString, NSMutableDictionary, NSData, geo_isolater;

@interface GEOApplicationAuditToken : NSObject <NSCopying, NSSecureCoding, GEOXPCSerializable> {
    geo_isolater *_isolater;
    NSData *_tokenData;
    NSString *_resolvedBundleId;
    NSString *_resolvedNetworkAttributionBundleId;
    NSString *_overrideOfflineCohortId;
    NSMutableDictionary *_entitlementValueCache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic, getter=_secondaryIdentifier) NSString *secondaryIdentifier;
@property (readonly, nonatomic) NSString *proxiedBundleId;
@property (readonly, nonatomic, getter=isProxiedExternalBundleId) BOOL proxiedExternalBundleId;
@property (readonly, nonatomic) NSString *offlineCohortId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compositeTokenForTokens:(id)a0;
+ (id)currentProcessAuditToken;

- (id)initWithXPCConnection:(id)a0;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)bundleId;
- (id)publicLogDescription;
- (BOOL)hasEntitlement:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initCommon;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_bundleIdForAuditToken;
- (id)_valueForEntitlement:(id)a0;
- (id)backingTokenData;
- (id)bundleIdForNetworkAttribution;
- (id)initWithAuditTokenData:(id)a0;
- (id)initWithNSXPCConnection:(id)a0;
- (id)initWithProxiedApplicationBundleId:(id)a0;
- (id)initWithProxiedExternalApplicationBundleId:(id)a0;
- (id)initWithSecondaryIdentifier:(id)a0;
- (id)overrideTokenWithOfflineCohortId:(id)a0;
- (id)overrideTokenWithProxiedBundleId:(id)a0;

@end
