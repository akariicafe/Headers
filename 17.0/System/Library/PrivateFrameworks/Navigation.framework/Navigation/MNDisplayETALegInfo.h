@class NSUUID, NSTimeZone, NSDate;

@interface MNDisplayETALegInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *waypointID;
@property (nonatomic) unsigned long long legIndex;
@property (nonatomic) unsigned long long remainingMinutes;
@property (retain, nonatomic) NSDate *eta;
@property (retain, nonatomic) NSTimeZone *timeZone;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
