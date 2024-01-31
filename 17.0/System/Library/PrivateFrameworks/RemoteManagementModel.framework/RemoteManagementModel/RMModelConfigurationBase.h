@interface RMModelConfigurationBase : RMModelDeclarationBase

+ (id)assetTypes;
+ (id)combineEnumHighest:(id)a0 other:(id)a1 enums:(id)a2;
+ (id)combineArrayAppend:(id)a0 other:(id)a1;
+ (id)combineBooleanAnd:(id)a0 other:(id)a1;
+ (id)combineBooleanOr:(id)a0 other:(id)a1;
+ (id)combineDictionary:(id)a0 other:(id)a1;
+ (id)combineEnumLowest:(id)a0 other:(id)a1 enums:(id)a2;
+ (id)combineFirst:(id)a0 other:(id)a1;
+ (id)combineNumberMax:(id)a0 other:(id)a1;
+ (id)combineNumberMin:(id)a0 other:(id)a1;
+ (id)combineSetIntersection:(id)a0 other:(id)a1;
+ (id)combineSetUnion:(id)a0 other:(id)a1;
+ (BOOL)usesKeychainAssets;

- (id)assetReferences;
- (id)declarationClassType;

@end
