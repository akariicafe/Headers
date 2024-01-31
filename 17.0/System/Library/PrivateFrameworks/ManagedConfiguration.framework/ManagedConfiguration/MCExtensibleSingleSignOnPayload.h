@class NSString, NSDictionary, NSArray;

@interface MCExtensibleSingleSignOnPayload : MCPayload

@property (retain, nonatomic) NSString *esso_type;
@property (retain, nonatomic) NSString *esso_realm;
@property (retain, nonatomic) NSString *esso_extensionIdentifier;
@property (retain, nonatomic) NSString *esso_teamIdentifier;
@property (retain, nonatomic) NSDictionary *esso_extensionData;
@property (retain, nonatomic) NSArray *esso_URLs;
@property (retain, nonatomic) NSArray *esso_hosts;
@property (retain, nonatomic) NSString *esso_screenLockedBehavior;
@property (retain, nonatomic) NSArray *esso_deniedBundleIdentifiers;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)title;
- (BOOL)_validateHost:(id)a0 outError:(id *)a1;
- (id)_validateURLString:(id)a0 outError:(id *)a1;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
