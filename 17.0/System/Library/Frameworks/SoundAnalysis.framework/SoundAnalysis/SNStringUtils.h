@interface SNStringUtils : NSObject

+ (id)numberFromString:(id)a0;
+ (id)componentsOfString:(id)a0 separatedByString:(id)a1 componentsCount:(long long)a2 error:(id *)a3;
+ (id)doubleFromString:(id)a0;
+ (id)longLongFromString:(id)a0;
+ (id)nonemptyComponentsOfString:(id)a0 separatedByCharactersInSet:(id)a1;
+ (id)nonemptyComponentsOfString:(id)a0 separatedByString:(id)a1;
+ (id)nonemptyStringsArrayFromCollection:(id)a0;
+ (id)numberFromString:(id)a0 error:(id *)a1;
+ (Class)parseClassFromString:(id)a0 error:(id *)a1;
+ (id)parsePositiveUInt32FromString:(id)a0 error:(id *)a1;
+ (id)parseUInt32FromString:(id)a0 error:(id *)a1;
+ (id)pathComponentsOfString:(id)a0 componentsCount:(long long)a1 error:(id *)a2;
+ (id)removeWhitespaceFromString:(id)a0;
+ (id)unsignedLongLongFromString:(id)a0;
+ (BOOL)validateComponentsOfString:(id)a0 separatedByString:(id)a1 hasCount:(long long)a2 error:(id *)a3;
+ (BOOL)validatePathComponentsOfString:(id)a0 hasCount:(long long)a1 error:(id *)a2;
+ (id)whitespaceDelimitedWordsFromString:(id)a0;

- (id)init;

@end
