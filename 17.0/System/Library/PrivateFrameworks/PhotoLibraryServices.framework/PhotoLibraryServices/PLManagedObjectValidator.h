@interface PLManagedObjectValidator : NSObject

+ (id)_entityClassesToValidate;
+ (BOOL)validateAllObjectsUsingManagedObjectContext:(id)a0 resultHandler:(id /* block */)a1;
+ (BOOL)validateAllObjectsWithEntityClass:(Class)a0 inManagedObjectContext:(id)a1 resultHandler:(id /* block */)a2;
+ (id)validateManagedObject:(id)a0;

@end
