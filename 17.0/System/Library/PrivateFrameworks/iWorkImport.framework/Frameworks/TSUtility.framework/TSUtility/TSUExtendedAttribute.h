@class NSString, NSData;

@interface TSUExtendedAttribute : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSData *value;

+ (id)extendedAttributeFromPath:(id)a0 name:(id)a1 options:(int)a2 error:(id *)a3;
+ (id)extendedAttributeWithName:(id)a0 value:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromPath:(id)a0 name:(id)a1 options:(int)a2 error:(id *)a3;
- (id)initFromPathFileSystemRepresentation:(const char *)a0 name:(id)a1 forRemoval:(BOOL)a2 options:(int)a3 error:(id *)a4;
- (BOOL)setAttributeToPath:(id)a0 options:(int)a1 error:(id *)a2;
- (BOOL)setAttributeToPathFileSystemRepresentation:(const char *)a0 options:(int)a1 error:(id *)a2;
- (BOOL)shouldPreserveForIntent:(unsigned int)a0;

@end
