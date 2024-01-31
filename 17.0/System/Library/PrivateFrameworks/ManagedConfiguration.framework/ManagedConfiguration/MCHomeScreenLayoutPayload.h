@class NSArray;

@interface MCHomeScreenLayoutPayload : MCPayload

@property (retain, nonatomic) NSArray *layout;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)parseIconsArray:(id)a0 allowFolders:(BOOL)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
