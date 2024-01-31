@class NSUUID, NSDate, CWFAutoJoinParameters;

@interface CWFAutoJoinRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CWFAutoJoinParameters *parameters;
@property (nonatomic) BOOL allowAutoHotspotFallback;
@property (copy, nonatomic) NSDate *addedAt;
@property (nonatomic) BOOL throttled;
@property (copy, nonatomic) id /* block */ reply;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
