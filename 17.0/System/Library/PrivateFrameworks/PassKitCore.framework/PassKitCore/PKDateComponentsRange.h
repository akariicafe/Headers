@class NSDateComponents;

@interface PKDateComponentsRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateComponents *startDateComponents;
@property (readonly, copy, nonatomic) NSDateComponents *endDateComponents;

- (id)dateInterval;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDateComponents:(id)a0 endDateComponents:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDateComponentsRange:(id)a0;

@end
