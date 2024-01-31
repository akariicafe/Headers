@interface PACoalescedAccessRecord : PACompleteAccessRecord

@property (readonly, nonatomic) unsigned long long count;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAccess:(id)a0 startTime:(double)a1 endTime:(double)a2 count:(long long)a3;
- (BOOL)isEqualToAccessRecord:(id)a0;

@end
