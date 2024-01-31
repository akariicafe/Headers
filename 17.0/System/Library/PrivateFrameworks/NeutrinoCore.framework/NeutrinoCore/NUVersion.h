@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (BOOL)isValidVersionString:(id)a0 error:(out id *)a1 major:(id *)a2 minor:(id *)a3;
+ (id)versionOne;
+ (id)versionWithString:(id)a0 error:(out id *)a1;
+ (id)regularExpression;
+ (id)versionZero;
+ (BOOL)isValidVersionString:(id)a0 error:(out id *)a1;

- (id)init;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;
- (id)description;
- (BOOL)isEqualToVersion:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end
