@class NSString, NSNumber;

@interface HKReferenceRangeViewData : NSObject <NSCopying>

@property (copy, nonatomic) NSString *valueString;
@property (copy, nonatomic) NSString *unitString;
@property (copy, nonatomic) NSString *rangeLowString;
@property (copy, nonatomic) NSString *rangeHighString;
@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *rangeLow;
@property (copy, nonatomic) NSNumber *rangeHigh;
@property (nonatomic) BOOL useOutOfRangeValueColor;

+ (id)referenceRangeViewDataFromInspectableValueInRange:(id)a0;
+ (id)_codedQuantityForValue:(id)a0;
+ (id)_codedQuantityForValueCollection:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
