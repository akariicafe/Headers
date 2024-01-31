@class NSArray, NSString;

@interface PGMeaningPartsOfDayCriteria : NSObject <PGMeaningCriteria>

@property (retain, nonatomic) NSArray *positiveSignificantPartsOfDay;
@property (retain, nonatomic) NSArray *positiveSignificantPartsOfDayStrings;
@property (retain, nonatomic) NSArray *negativeSignificantPartsOfDay;
@property (retain, nonatomic) NSArray *negativeSignificantPartsOfDayStrings;
@property (retain, nonatomic) NSArray *positivePartsOfDay;
@property (retain, nonatomic) NSArray *positivePartsOfDayStrings;
@property (retain, nonatomic) NSArray *negativePartsOfDay;
@property (retain, nonatomic) NSArray *negativePartsOfDayStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_partsOfDayAsNumbersFromStrings:(id)a0;
+ (id)_partsOfDayNumbersByString;
+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)_passesPartsOfDayWithMomentNodePartsOfDay:(unsigned long long)a0 positivePartsOfDay:(id)a1 negativePartsOfDay:(id)a2;
- (BOOL)passesForAssets:(id)a0;
- (BOOL)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;

@end
