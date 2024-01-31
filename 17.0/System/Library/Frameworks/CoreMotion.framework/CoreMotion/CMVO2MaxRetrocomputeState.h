@class NSNumber, NSDate;

@interface CMVO2MaxRetrocomputeState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long status;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly, retain, nonatomic) NSNumber *meanDelta;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatus:(long long)a0 startDate:(id)a1 endDate:(id)a2 meanDelta:(id)a3;

@end
