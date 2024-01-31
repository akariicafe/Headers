@class NSString, _PASDomainSelection, NSSet;

@interface HVSpotlightDeletionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleIdentifier;
    _PASDomainSelection *_domainSelection;
    NSSet *_uniqueIdentifiers;
    BOOL _isPurge;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (void)addDeletableContentWithBundleIdentifier:(id)a0 domainIdentifier:(id)a1 uniqueIdentifier:(id)a2 toBloomFilter:(id)a3;

- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)accessCriteriaUsingBundleIdentifierBlock:(id /* block */)a0 domainSelectionBlock:(id /* block */)a1 uniqueIdentifiersBlock:(id /* block */)a2;
- (id)initWithBundleIdentifier:(id)a0 purgedUniqueIdentifiers:(id)a1;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0 domainSelection:(id)a1;
- (void).cxx_destruct;
- (void)accessCriteriaUsingBundleIdentifierBlock:(id /* block */)a0 domainSelectionBlock:(id /* block */)a1 incontrovertiblyDeletedUniqueIdentifiersBlock:(id /* block */)a2 purgedUniqueIdentifiersBlock:(id /* block */)a3;
- (id)copyWithBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)matchesBloomFilter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
