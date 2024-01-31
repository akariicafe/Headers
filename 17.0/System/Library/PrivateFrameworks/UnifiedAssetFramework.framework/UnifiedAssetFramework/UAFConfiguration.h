@interface UAFConfiguration : NSObject

+ (BOOL)autoAssetFeatureEnabled:(id)a0;
+ (BOOL)isValid:(id)a0 fileType:(id)a1 fileVersions:(id)a2 error:(id *)a3;
+ (BOOL)isValidValue:(id)a0 key:(id)a1 kind:(Class)a2 required:(BOOL)a3 error:(id *)a4;

@end
