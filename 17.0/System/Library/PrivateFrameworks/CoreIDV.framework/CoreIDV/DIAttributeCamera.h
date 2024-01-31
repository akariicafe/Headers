@class NSArray;

@interface DIAttributeCamera : DIAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *scanRequirements;
@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue;

- (id)defaultValue;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
