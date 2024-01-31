@class NSString, HDBound;

@interface HDLimit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) HDBound *upperBound;
@property (copy, nonatomic) HDBound *lowerBound;

- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToLimit:(id)a0;
- (BOOL)measurementWithinBounds:(id)a0;

@end
