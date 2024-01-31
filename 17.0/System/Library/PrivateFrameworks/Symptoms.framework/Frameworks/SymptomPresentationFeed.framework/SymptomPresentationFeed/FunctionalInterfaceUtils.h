@interface FunctionalInterfaceUtils : NSObject

+ (unsigned char)nwFunctionalInterfaceTypeForNWInterfaceType:(long long)a0 nwInterfaceSubtype:(long long)a1;
+ (unsigned char)nwFunctionalInterfaceTypeForNWInterface:(id)a0;
+ (unsigned char)nwFunctionalInterfaceTypeForNWInterfaceSubtype:(long long)a0;
+ (unsigned char)nwFunctionalInterfaceTypeForNWInterfaceType:(long long)a0;
+ (long long)nwInterfaceSubtypeForNWFunctionalInterfaceType:(unsigned char)a0;
+ (long long)nwInterfaceTypeForNWFunctionalInterfaceType:(unsigned char)a0;
+ (id)stringForFunctionalInterfaceType:(unsigned char)a0;

@end
