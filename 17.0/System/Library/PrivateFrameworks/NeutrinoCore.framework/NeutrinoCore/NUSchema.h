@class NUIdentifier;

@interface NUSchema : NUModel

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NUIdentifier *identifier;

+ (id)copyIdentifiableItem:(id)a0;
+ (id)deserializeItem:(id)a0 schemaIdentifier:(id)a1 error:(out id *)a2;
+ (id)reservedPropertyNames;
+ (long long)deserializeMediaTypeFromDictionary:(id)a0;
+ (BOOL)validateIdentifiable:(id)a0 type:(long long)a1 error:(out id *)a2;
+ (id)deserializeSchemaFromArray:(id)a0 error:(out id *)a1;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeIdentifiableItem:(id)a0 error:(out id *)a1;
+ (long long)schemaTypeFromString:(id)a0 error:(out id *)a1;
+ (id)serializeIdentifiableItem:(id)a0 error:(out id *)a1;
+ (id)copyItem:(id)a0 schemaIdentifier:(id)a1;
+ (id)deserializeIdentifierFromDictionary:(id)a0 error:(out id *)a1;
+ (id)serializeItem:(id)a0 schemaIdentifier:(id)a1 error:(out id *)a2;
+ (BOOL)validateIdentifiable:(id)a0 error:(out id *)a1;
+ (BOOL)serializeMediaType:(long long)a0 intoDictionary:(id)a1 error:(out id *)a2;
+ (BOOL)validateSchemaType:(id)a0 error:(out id *)a1;
+ (id)deserializeContentsFromDictionary:(id)a0 error:(out id *)a1;
+ (BOOL)validateSchemaIdentifier:(id)a0 type:(long long)a1 error:(out id *)a2;

- (BOOL)isValid:(out id *)a0;
- (id)initWithAttributes:(id)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)description;
- (BOOL)deserializeIdentifierFromDictionary:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (id)schemaDependencies;
- (BOOL)serializeIdentifier:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (BOOL)validateIdentifier:(id)a0 error:(out id *)a1;

@end
