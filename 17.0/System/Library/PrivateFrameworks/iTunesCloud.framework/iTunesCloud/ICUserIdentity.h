@class NSString, NSNumber;

@interface ICUserIdentity : NSObject <NSCopying, NSSecureCoding, _MSVAccountInformationProviding> {
    NSString *_deviceIdentifier;
    BOOL _isEncodingUsingSpecificIdentityStore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasResolvedDSID;
@property (readonly, nonatomic) unsigned long long creationTime;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, nonatomic) BOOL allowsDelegation;
@property (readonly, nonatomic) BOOL allowsAccountEstablishment;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *accountDSID;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeAccount;
+ (id)activeLockerAccount;
+ (id)specificAccountWithDSID:(id)a0;
+ (id)nullIdentity;
+ (id)autoupdatingActiveLockerAccount;
+ (id)autoupdatingActiveAccount;
+ (id)carrierBundleWithDeviceIdentifier:(id)a0;

- (id)init;
- (id)identityAllowingEstablishment:(BOOL)a0;
- (BOOL)_isComparableUsingResolvedDSID;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToIdentity:(id)a0 inStore:(id)a1;
- (id)_resolvedDSIDUsingSpecificIdentityStore:(id)a0;
- (unsigned long long)hashInStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_setResolvedDSID:(id)a0;
- (void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)a0;
- (id)identityAllowingDelegation:(BOOL)a0;
- (void)_performEncodingTaskUsingSpecificIdentityStore:(id)a0 encodingHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
