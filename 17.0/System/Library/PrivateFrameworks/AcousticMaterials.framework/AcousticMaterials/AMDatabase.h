@interface AMDatabase : NSObject

+ (BOOL)openDatabase:(out id *)a0;
+ (id)acousticParameters:(id)a0 forMaterialName:(id)a1 error:(out id *)a2;
+ (id)acousticParameters:(id)a0 forSemanticLabels:(id)a1 error:(out id *)a2;
+ (BOOL)checkDatabaseReadAccess:(out id *)a0;
+ (BOOL)closeDatabase:(out id *)a0;
+ (id)labelsForSemanticType:(id)a0 error:(out id *)a1;
+ (id)materialNamesForAcousticParameterType:(id)a0 error:(out id *)a1;
+ (BOOL)openDatabaseWithAcousticParameterFilter:(unsigned long long)a0 error:(out id *)a1;

@end
