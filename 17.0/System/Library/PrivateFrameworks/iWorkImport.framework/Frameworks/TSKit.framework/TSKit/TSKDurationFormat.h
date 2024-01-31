@interface TSKDurationFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) BOOL useAutomaticUnits;
@property (readonly, nonatomic) unsigned char durationUnitSmallest;
@property (readonly, nonatomic) unsigned char durationUnitLargest;
@property (readonly, nonatomic) unsigned char durationStyle;

+ (unsigned char)automaticMaxAndMinDurationUnitsForTimeInterval:(double)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)asDurationFormat;
- (unsigned char)durationUnitLargestWithTimeInterval:(double)a0;
- (id)formatByFixingUnitsIfNecessaryForTimeInterval:(double)a0;
- (id)initWithUseAutomaticUnits:(BOOL)a0 durationUnitSmallest:(unsigned char)a1 durationUnitLargest:(unsigned char)a2 durationStyle:(unsigned char)a3;
- (id)stringFromDurationTimeInterval:(double)a0 locale:(id)a1;
- (id)stringFromDurationTimeInterval:(double)a0 locale:(id)a1 showPrecision:(BOOL)a2;
- (unsigned char)maxAndMinDurationUnitsForTimeInterval:(double)a0;

@end
