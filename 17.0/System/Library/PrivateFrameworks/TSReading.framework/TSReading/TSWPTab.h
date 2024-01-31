@class NSString;

@interface TSWPTab : NSObject <NSCopying>

@property (nonatomic) double position;
@property (nonatomic) int alignment;
@property (copy, nonatomic) NSString *leader;

+ (void)initialize;
+ (id)tab;
+ (id)kTabStopDisplayStringUnderscore;
+ (id)displayStringFromTabLeader:(id)a0;
+ (id)kTabStopAlignmentStringCenter;
+ (id)kTabStopAlignmentStringDecimal;
+ (id)kTabStopAlignmentStringLeft;
+ (id)kTabStopAlignmentStringRight;
+ (id)kTabStopDisplayStringArrow;
+ (id)kTabStopDisplayStringDash;
+ (id)kTabStopDisplayStringNone;
+ (id)kTabStopDisplayStringPoint;
+ (id)kTabStopLeaderStringArrow;
+ (id)kTabStopLeaderStringArrowRTL;
+ (id)kTabStopLeaderStringDash;
+ (id)kTabStopLeaderStringPoint;
+ (id)kTabStopLeaderStringUnderscore;
+ (id)stringFromTabAlignment:(int)a0 isRTL:(BOOL)a1;
+ (int)tabAlignmentFromString:(id)a0 isRTL:(BOOL)a1;
+ (id)tabLeaderFromDisplayString:(id)a0;

- (id)init;
- (void)dealloc;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareToPosition:(double)a0;
- (id)initWithPosition:(double)a0 alignment:(int)a1 leader:(id)a2;
- (BOOL)isEqualToPosition:(double)a0;
- (double)positionInInches;
- (void)setPositionInInches:(double)a0;

@end
