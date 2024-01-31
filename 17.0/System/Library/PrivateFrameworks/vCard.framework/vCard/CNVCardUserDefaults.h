@interface CNVCardUserDefaults : NSObject

+ (long long)defaultNameOrdering;
+ (BOOL)includeUserSettings;
+ (BOOL)includePhotosInVCards;
+ (BOOL)boolForKey:(id)a0;
+ (BOOL)includeNotesInVCards;
+ (long long)integerForKey:(id)a0;
+ (unsigned long long)outputFormat;
+ (id)vCard21Encoding;
+ (id)vCardPrivateFields;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (id)objectForKey:(id)a0;
+ (BOOL)debugLogEnabled;

@end
