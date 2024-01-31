@class NSString, PKImage, NSData;

@interface PKPassTileImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *symbolName;
@property (nonatomic) long long tintColor;
@property (copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic) PKImage *image;
@property (readonly, copy, nonatomic) NSData *imageHash;

+ (id)_createForDictionary:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResolvedImageWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedImage:(id)a0;

@end
