@class NSString, REContent, NSArray, REElementAction;

@interface REElement : NSObject <REAutomaticExportedInterface, NSCopying, NSCoding>

@property (retain) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long privacyBehavior;
@property (readonly, nonatomic) REContent *content;
@property (readonly, nonatomic) REContent *idealizedContent;
@property (readonly, nonatomic) NSArray *relevanceProviders;
@property (readonly, nonatomic) REElementAction *action;
@property (readonly, nonatomic) NSString *namespacedIdentifier;

+ (id)_supportedDictionaryEncodingKeys;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 content:(id)a1 action:(id)a2 relevanceProviders:(id)a3;
- (id)shallowCopy;
- (BOOL)isNoContentElement;
- (void)finalizeContent;
- (BOOL)_relevanceProvidersEqualToElement:(id)a0;
- (void)_updateIdentifier:(id)a0;
- (void)_updateNamespacedIdentifier:(id)a0;
- (id)copyElementWithUpdatedRelevanceProviders:(id)a0;
- (id)dictionaryEncodingWithRelevanceProviderGenerator:(id)a0;
- (id)initWithDictionary:(id)a0 relevanceProviderGenerator:(id)a1;
- (id)initWithIdentifier:(id)a0 content:(id)a1 action:(id)a2 relevanceProviders:(id)a3 privacyBehavior:(unsigned long long)a4;
- (id)initWithIdentifier:(id)a0 content:(id)a1 idealizedContent:(id)a2 action:(id)a3 relevanceProviders:(id)a4;
- (id)initWithIdentifier:(id)a0 content:(id)a1 idealizedContent:(id)a2 action:(id)a3 relevanceProviders:(id)a4 privacyBehavior:(unsigned long long)a5;

@end
