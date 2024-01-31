@class NSString;

@interface INHomeAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long valueType;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 boolValue:(BOOL)a1;
- (id)initWithType:(long long)a0 doubleValue:(double)a1;
- (id)initWithType:(long long)a0 integerValue:(long long)a1;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)initWithType:(long long)a0 valueType:(long long)a1 boolValue:(BOOL)a2 doubleValue:(double)a3 integerValue:(long long)a4 stringValue:(id)a5;

@end
