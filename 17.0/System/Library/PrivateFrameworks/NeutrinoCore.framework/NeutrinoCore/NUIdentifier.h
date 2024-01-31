@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>

@property (readonly) NSString *nameSpace;
@property (readonly) NSString *name;
@property (readonly) NUVersion *version;
@property (readonly) NSString *stringRepresentation;

+ (BOOL)validateNameSpace:(id)a0 error:(out id *)a1;
+ (id)defaultNameSpace;
+ (id)validNameSpaceRegularExpression;
+ (id)validNameRegularExpression;
+ (BOOL)validateIdentifierString:(id)a0 error:(out id *)a1;
+ (id)identifierWithString:(id)a0 error:(out id *)a1;
+ (id)identifierRegularExpression;
+ (BOOL)validateName:(id)a0 error:(out id *)a1;
+ (id)latestIdentifierWithNameSpace:(id)a0 name:(id)a1;
+ (BOOL)validateIdentifierString:(id)a0 space:(out id *)a1 name:(out id *)a2 version:(out id *)a3 error:(out id *)a4;
+ (id)latestIdentifierWithName:(id)a0;

- (id)initWithNameSpace:(id)a0 name:(id)a1 version:(id)a2;
- (id)init;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)description;
- (BOOL)isEqualToIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 version:(id)a1;
- (id)identifierWithVersion:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
