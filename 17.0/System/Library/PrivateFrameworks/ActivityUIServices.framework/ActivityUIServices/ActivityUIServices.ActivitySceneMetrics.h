@class NSString;

@interface ActivityUIServices.ActivitySceneMetrics : NSObject <NSSecureCoding, BSXPCCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic) void /* unknown type, empty encoding */ cornerRadius;
@property (nonatomic, retain) void /* unknown type, empty encoding */ edgeInsets;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 edgeInsets:(id)a2;

@end
