@class NSArray, PXLabeledValue, NSDate, NSNumber;

@interface PXSmartAlbumDateValueCondition : PXSmartAlbumCondition {
    NSArray *_unitValues;
}

@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSDate *secondDateValue;
@property (readonly, nonatomic) BOOL hasNumberOfUnitValue;
@property (retain, nonatomic) NSNumber *numberOfUnitValue;
@property (readonly, nonatomic) NSArray *unitValues;
@property (retain, nonatomic) PXLabeledValue *unitValue;

- (void).cxx_destruct;
- (long long)comparatorMode;
- (void)setComparatorValue:(id)a0;

@end
