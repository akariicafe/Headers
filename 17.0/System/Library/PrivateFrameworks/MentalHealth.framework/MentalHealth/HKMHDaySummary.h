@class NSArray, HKStateOfMind;

@interface HKMHDaySummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long dayIndex;
@property (readonly, copy, nonatomic) NSArray *momentaryStatesOfMind;
@property (copy, nonatomic) HKStateOfMind *dailyStateOfMind;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDayIndex:(long long)a0 momentaryStatesOfMind:(id)a1 dailyStateOfMind:(id)a2;

@end
