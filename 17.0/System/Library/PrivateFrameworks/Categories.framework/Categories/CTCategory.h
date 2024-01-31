@class NSString, NSArray;

@interface CTCategory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSArray *webDomains;
@property (copy, nonatomic) NSString *primaryWebDomain;
@property (copy, nonatomic) NSString *canonicalBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *equivalentBundleIdentifiers;

+ (id)parentAppBundleIdentifierForAppRecord:(id)a0;
+ (id)_appBundleIdentifierStringFor:(id)a0 categoryIdentifier:(id)a1;
+ (id)equivalentIdentifiersForBundleID:(id)a0;
+ (id)systemAppCategoryIdentifierForBundleIdentifier:(id)a0;
+ (id)_DHIDtoCategoryDisplayNameMap;
+ (id)_xpcConnection;
+ (id)schemeStringForPlatform:(id)a0;
+ (void)initialize;
+ (id)systemCategoryIDWithPatternMatching:(id)a0;
+ (id)itemWith:(id)a0 platform:(id)a1 array:(id)a2;
+ (void)categoryForDomainURLs:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForBundleID:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)_bundleIdentifierForContextResponse:(id)a0;
+ (id)primaryLocalizedNameForIdentifier:(id)a0;
+ (id)_schemeRemovedEquivalentBundleIDsMapping:(id)a0;
+ (id)_equivalentBundleIDsMapping;
+ (id)_DHToAppStoreCategoriesMap;
+ (id)_relatedItemsForContextResponse:(id)a0;
+ (void)_getCategoryTypeForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainNames:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_getAssociatedDomainsForHostNames:(id)a0;
+ (void)categoryForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForBundleIdentifiers:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)_newXpcConnection;
+ (id)_getEquivalentBundleIdentifiers:(id)a0;
+ (void)categoryForDomainURL:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_urlComponentsForHostName:(id)a0;
+ (id)localizedNameForIdentifier:(id)a0;
+ (void)categoryForBundleID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_overrideEquivalentIdentifiers:(id)a0 forBundleID:(id)a1;
+ (id)_identifierForContextResponse:(id)a0;
+ (id)_equivalentBundleIDsMappingForWatchOSBundleID:(id)a0;
+ (id)bundleIDForPlatform:(id)a0 fromBundleID:(id)a1 platform:(id)a2;
+ (void)_lookupAppStoreUsing:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)_urlStringsForHostNames:(id)a0;
+ (id)shortLocalizedNameForIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4;
- (unsigned long long)hash;
- (BOOL)isEqualToCategory:(id)a0;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2 primaryWebDomain:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isSystemBundleIdentifier;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (id)description;
- (id)equivalentBundleIdentifers;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_ctCategoryCommonInitWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3;

@end
