@interface TPDictionaryMatchingRule : NSObject

+ (id)orMatch:(id)a0;
+ (id)fieldExists:(id)a0;
+ (id)notMatch:(id)a0;
+ (id)fieldMatch:(id)a0 fieldRegex:(id)a1;
+ (id)trueMatch;
+ (id)falseMatch;
+ (id)andMatch:(id)a0;

@end
