@interface ISRecipeInfo : NSObject

+ (id)appRecipeForPlatform:(unsigned long long)a0 descriptor:(id)a1;
+ (id)documentRecipeForPlatform:(unsigned long long)a0 descriptor:(id)a1;
+ (id)genericRecipeWithAppliedDescriptorRecipeAttributes:(id)a0;

@end
