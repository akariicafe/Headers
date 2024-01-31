@class NSString, PKImage, NSData;

@interface PKPassFieldImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) long long tintColor;
@property (readonly, nonatomic) PKImage *image;
@property (readonly, copy, nonatomic) NSData *imageHash;
@property (readonly, nonatomic) BOOL allowInternalSymbols;

+ (id)createForDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2 passType:(unsigned long long)a3;

- (id)init;
- (unsigned long long)hash;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
