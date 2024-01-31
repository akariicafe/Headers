@class NSString, NSFileProviderDomainVersion;
@protocol NSFileProviderItem;

@interface FPTestingCreation : FPTestingOperation <NSFileProviderTestingCreation>

@property (readonly, nonatomic) long long snapshotVersion;
@property (readonly, nonatomic) unsigned long long targetSide;
@property (readonly, nonatomic) id<NSFileProviderItem> sourceItem;
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
- (id)asCreation;
- (id)initWithOperationIdentifier:(id)a0 sourceItem:(id)a1 domainVersion:(id)a2 snapshotVersion:(long long)a3;

@end
