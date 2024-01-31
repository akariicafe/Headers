@class NSString, NSFileProviderDomain, NSURL, NSArray;

@interface FPProvider : FPProviderDomain <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSURL *storageURL;
@property (readonly, nonatomic) NSFileProviderDomain *domain;
@property (readonly, nonatomic) NSArray *supportedSortDescriptors;
@property (readonly, nonatomic) long long type;

+ (id)beginMonitoringProviderChangesWithHandler:(id /* block */)a0;
+ (void)fetchProviderForItem:(id)a0 completionHandler:(id /* block */)a1;
+ (void)endMonitoringProviderChanges:(id)a0;

- (id)localizedTitleForSortDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
