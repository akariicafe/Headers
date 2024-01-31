@class LNActionDescriptionMetadata, NSString, NSArray, NSDictionary, NSOrderedSet;

@interface LNQueryMetadata : NSObject <NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *queryType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *entityType;
@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSArray *sortingOptions;
@property (readonly, copy, nonatomic) NSString *mangledTypeName;
@property (readonly, copy, nonatomic) NSDictionary *mangledTypeNameByBundleIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *effectiveBundleIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, copy, nonatomic) LNActionDescriptionMetadata *descriptionMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6 availabilityAnnotations:(id)a7;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6 availabilityAnnotations:(id)a7 capabilities:(unsigned long long)a8;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6 availabilityAnnotations:(id)a7 capabilities:(unsigned long long)a8 descriptionMetadata:(id)a9;
- (id)initWithIdentifier:(id)a0 queryType:(id)a1 entityType:(id)a2 mangledTypeName:(id)a3 mangledTypeNameByBundleIdentifier:(id)a4 effectiveBundleIdentifiers:(id)a5 parameters:(id)a6 sortingOptions:(id)a7;
- (id)initWithIdentifier:(id)a0 queryType:(id)a1 entityType:(id)a2 parameters:(id)a3 sortingOptions:(id)a4;
- (id)mangledTypeNameForBundleIdentifier:(id)a0;
- (id)metadataByAddingEffectiveBundleIdentifiers:(id)a0 mangledTypeName:(id)a1;

@end
