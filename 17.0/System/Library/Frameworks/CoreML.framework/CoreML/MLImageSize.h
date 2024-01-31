@interface MLImageSize : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long pixelsWide;
@property (readonly) long long pixelsHigh;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPixelsWide:(long long)a0 pixelsHigh:(long long)a1;
- (BOOL)isEqualToImageSize:(id)a0;

@end
