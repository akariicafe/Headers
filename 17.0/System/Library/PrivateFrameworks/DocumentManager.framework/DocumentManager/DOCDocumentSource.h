@class NSArray, NSMutableDictionary, NSString, FPProviderDomain;

@interface DOCDocumentSource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *iconsBySize;
@property (copy) NSArray *documentContentTypes;
@property (copy) NSString *displayName;
@property (copy) NSString *providerName;
@property (copy) NSString *domainName;
@property (copy) NSString *identifier;
@property (copy) NSString *promptText;
@property BOOL hidden;
@property FPProviderDomain *searching_fileProviderDomain;
@property (readonly, nonatomic) NSArray *supportedSearchFilters;
@property (readonly) BOOL isAvailableSystemWide;
@property (readonly) unsigned long long status;
@property (readonly) BOOL appearsInMoveUI;
@property (readonly) BOOL isiCloudBased;

+ (void)defaultSourceForBundleIdentifier:(id)a0 completionBlock:(id /* block */)a1;
+ (void)endSearchingSources:(id)a0;
+ (void)setDefaultSource:(id)a0 forBundleIdentifier:(id)a1;
+ (id)startSearchingSourcesForBundleIdentifier:(id)a0 updateBlock:(id /* block */)a1;
+ (id)applicationIconForBundleIdentifier:(id)a0 size:(long long)a1;
+ (id)defaultSourceForBundleIdentifier:(id)a0 defaultSourceIdentifier:(id)a1 sources:(id)a2;
+ (void)defaultSourceForBundleIdentifier:(id)a0 selectedSourceIdentifier:(id)a1 completionBlock:(id /* block */)a2;
+ (id)defaultSourceIdentifierForBundleIdentifier:(id)a0;
+ (id)iconForFileProvider:(id)a0 size:(long long)a1;
+ (void)setDefaultSourceIdentifier:(id)a0 forBundleIdentifier:(id)a1;
+ (id)sourceIdentifierOrderWithDefault:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)iconForSize:(long long)a0;
- (id)sanitizedSource;
- (BOOL)usesEnumeration;
- (BOOL)isValidForConfiguration:(id)a0;
- (id)loadIconForSize:(long long)a0;

@end
