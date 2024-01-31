@class NSString, NSMutableArray;

@interface LPKPerfResultEntry : NSObject

@property (retain, nonatomic) NSMutableArray *entryValues;
@property (nonatomic) BOOL needsReCalculation;
@property (copy, nonatomic) NSString *entryName;
@property (readonly, nonatomic) double medianValue;
@property (readonly, nonatomic) double meanValue;

- (id)init;
- (void).cxx_destruct;
- (void)_reCalculateValuesIfNeeded;
- (void)addEntryValue:(double)a0;

@end
