@interface _CNUIComponentBasedColorSerialization : NSObject

+ (struct CGColorSpace { } *)_createColorSpaceWithName:(id)a0;
+ (id)colorFromDictionary:(id)a0;
+ (id)dictionaryForColor:(id)a0;
+ (void)parseString:(id)a0 forComponents:(double *)a1 count:(long long *)a2;

@end
