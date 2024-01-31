@class NSString;

@interface WBSNamedColorOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *colorName;
@property (readonly, nonatomic) double redComponent;
@property (readonly, nonatomic) double greenComponent;
@property (readonly, nonatomic) double blueComponent;
@property (readonly, nonatomic) double alphaComponent;
@property (readonly, copy, nonatomic) NSString *accessibilityName;
@property (readonly, nonatomic) BOOL isClearColor;

+ (id)colorWithData:(id)a0;

- (id)dataRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithColorName:(id)a0 red:(double)a1 green:(double)a2 blue:(double)a3 alpha:(double)a4 accessibilityName:(id)a5;

@end
