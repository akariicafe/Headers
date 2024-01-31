@class NSString, NSFileProviderItemVersion, NSFileProviderDomainVersion;

@interface FPTestingDeletion : FPTestingOperation <NSFileProviderTestingDeletion>

@property (readonly, nonatomic) unsigned long long targetSide;
@property (readonly, nonatomic) NSString *sourceItemIdentifier;
@property (readonly, nonatomic) NSString *targetItemIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *targetItemBaseVersion;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)asDeletion;
- (id)initWithOperationIdentifier:(id)a0 sourceItemIdentifier:(id)a1 targetItemIdentifier:(id)a2 targetItemBaseVersion:(id)a3 domainVersion:(id)a4;

@end
