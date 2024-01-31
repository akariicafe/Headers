@class NSMutableArray, NSDate;

@interface EKInviteeTimeSpan : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSMutableArray *conflictedParticipants;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
