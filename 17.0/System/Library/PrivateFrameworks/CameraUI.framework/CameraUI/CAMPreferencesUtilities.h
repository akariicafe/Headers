@interface CAMPreferencesUtilities : NSObject

+ (id)colorForKey:(id)a0 applicationID:(id)a1;
+ (double)doubleForKey:(id)a0 applicationID:(id)a1 keyIsValidAndExists:(BOOL *)a2;
+ (void)setDictionary:(id)a0 forKey:(id)a1 defaults:(id)a2;
+ (id)numericDictionaryForKey:(id)a0 defaults:(id)a1;
+ (BOOL)boolInCameraDomainForKey:(id)a0;

@end
