@class NSString;

@interface ActivityUIServices.SizeDimensionRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ minimum;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maximum;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithMinimum:(double)a0 maximum:(double)a1;
- (id)initWithMinimum:(double)a0 maximum:(double)a1 type:(long long)a2;

@end
