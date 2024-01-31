@class NSString;

@interface TSWPTab : NSObject <NSCopying>

@property (nonatomic) double position;
@property (nonatomic) int alignment;
@property (copy, nonatomic) NSString *leader;

+ (id)tab;
+ (id)displayStringFromTabLeader:(id)a0;
+ (int)tabAlignmentFromString:(id)a0 isRTL:(BOOL)a1;
+ (id)tabLeaderFromDisplayString:(id)a0;
+ (id)stringFromTabAlignment:(int)a0 isRTL:(BOOL)a1 isVertical:(BOOL)a2;
+ (id)tabStopAlignmentStringBottom;
+ (id)tabStopAlignmentStringCenter;
+ (id)tabStopAlignmentStringDecimal;
+ (id)tabStopAlignmentStringLeft;
+ (id)tabStopAlignmentStringMiddle;
+ (id)tabStopAlignmentStringRight;
+ (id)tabStopAlignmentStringTop;
+ (id)tabStopDisplayStringArrow;
+ (id)tabStopDisplayStringDash;
+ (id)tabStopDisplayStringNone;
+ (id)tabStopDisplayStringPoint;
+ (id)tabStopDisplayStringUnderscore;
+ (id)tabStopLeaderStringArrow;
+ (id)tabStopLeaderStringArrowRTL;
+ (id)tabStopLeaderStringDash;
+ (id)tabStopLeaderStringPoint;
+ (id)tabStopLeaderStringUnderscore;

- (id)init;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareToPosition:(double)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithPosition:(double)a0 alignment:(int)a1 leader:(id)a2;
- (BOOL)isEqualToPosition:(double)a0;
- (double)positionInInches;
- (void)setPositionInInches:(double)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
