@class NSMutableDictionary;

@interface PPSRecipeEngine : NSObject

@property (retain) NSMutableDictionary *registeredHandlers;

+ (id)sharedInstance;
+ (id)createRecipeID:(id)a0;
+ (id)recipeHandlers;

- (void).cxx_destruct;
- (void)setupHandlers;
- (id)executeRecipe:(id)a0 withValue:(id)a1 withMetricDefinition:(id)a2 error:(id *)a3;
- (id)initRecipeEngine;
- (void)registerHandlersForClass:(Class)a0;

@end
