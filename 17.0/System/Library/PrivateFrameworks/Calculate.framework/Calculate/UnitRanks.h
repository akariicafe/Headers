@class UnitsInfo, NSMutableSet, NSMutableArray;

@interface UnitRanks : NSObject

@property (retain, nonatomic) NSMutableSet *units;
@property (retain, nonatomic) NSMutableArray *ranks;
@property (readonly) BOOL containsFrom;
@property (readonly) BOOL containsTo;
@property (readonly) BOOL containsUnit;
@property (readonly) BOOL containsCurrency;
@property (readonly) BOOL isAmbiguous;
@property (weak, nonatomic) UnitsInfo *unitsInfo;

+ (id)unitRanksWithUnitsInfo:(id)a0;

- (void)sort;
- (id)init;
- (void).cxx_destruct;
- (void)addUnitRank:(id)a0;
- (id)initWithUnitsInfo:(id)a0;

@end
