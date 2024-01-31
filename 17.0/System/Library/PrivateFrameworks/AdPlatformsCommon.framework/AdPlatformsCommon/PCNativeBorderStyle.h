@class PCNativeColor;

@interface PCNativeBorderStyle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PCNativeColor *color;
@property (nonatomic) double width;
@property (nonatomic) double cornerRadius;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
