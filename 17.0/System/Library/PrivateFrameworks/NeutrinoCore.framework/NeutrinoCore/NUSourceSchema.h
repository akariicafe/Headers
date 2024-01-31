@interface NUSourceSchema : NUSchema

+ (id)identifier;
+ (id)supportedAttributes;
+ (id)requiredAttributes;

- (id)init;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)deserializeAssetIdentifierFromDictionary:(id)a0 error:(out id *)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)copy:(id)a0;
- (id)deserializeSource:(id)a0 error:(out id *)a1;
- (id)identifier;
- (id)serializeSource:(id)a0 error:(out id *)a1;
- (BOOL)validateSource:(id)a0 error:(out id *)a1;
- (BOOL)serializeAssetIdentifier:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (id)schemaDependencies;
- (long long)type;

@end
