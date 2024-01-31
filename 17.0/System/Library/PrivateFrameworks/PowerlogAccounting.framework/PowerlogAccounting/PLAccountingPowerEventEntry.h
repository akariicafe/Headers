@class NSNumber;

@interface PLAccountingPowerEventEntry : PLAccountingEventEntry

@property (readonly, nonatomic) NSNumber *rootNodeID;
@property (readonly, nonatomic) double power;

+ (void)load;
+ (BOOL)isValidPower:(double)a0 forRootNodeID:(id)a1;
+ (double)minPowerDifference;
+ (double)minPowerPercentageDifference;

- (id)subEntryKey;
- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withRange:(id)a2;
- (int)instanceDirectionality;
- (BOOL)isEmptyEvent;
- (BOOL)isEqualContentsWithEvent:(id)a0;

@end
