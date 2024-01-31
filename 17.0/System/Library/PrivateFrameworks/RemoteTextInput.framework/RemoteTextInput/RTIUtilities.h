@interface RTIUtilities : NSObject

+ (id)customInfoDictionary;
+ (id)customInfoClassesForType:(id)a0 forClass:(Class)a1;
+ (void)unregisterCustomInfoType:(id)a0 forClass:(Class)a1;
+ (id)_filteredAttributedString:(id)a0 validAttributes:(id)a1;
+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1 forClass:(Class)a2;
+ (id)_attributedStringWithoutDefaultAttributes:(id)a0;

@end
