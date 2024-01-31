@class NSString, NSDictionary;

@interface SASyncSiriKitAppVocabulary : SADomainObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSDictionary *customVocabularyMap;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
