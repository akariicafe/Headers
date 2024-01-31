@class NSString, TPSSize;

@interface TPSAssetFileInfo : TPSSerializableObject

@property (nonatomic) long long scale;
@property (nonatomic) long long userInterface;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) TPSSize *size;

+ (BOOL)supportsSecureCoding;
+ (id)na_identity;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
