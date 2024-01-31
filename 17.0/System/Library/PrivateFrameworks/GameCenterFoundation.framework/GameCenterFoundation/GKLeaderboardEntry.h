@class NSString, GKPlayer, NSDate, GKLeaderboardEntryInternal;

@interface GKLeaderboardEntry : NSObject

@property (retain) GKLeaderboardEntryInternal *internal;
@property (readonly, nonatomic) GKPlayer *player;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) long long score;
@property (readonly, nonatomic) NSString *formattedScore;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly, nonatomic) NSDate *date;

+ (id)formattedDifferenceBetweenFirstScore:(id)a0 secondScore:(id)a1;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (id)_gkScore;

@end
