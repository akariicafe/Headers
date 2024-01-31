@class NSString, HKQuantity, NSDate;

@interface HKCardioFitnessDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    HKQuantity *_vo2maxQuantity;
    long long _biologicalSex;
    long long _ageInYears;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)a0 unitController:(id)a1 valueFont:(id)a2 unitFont:(id)a3 dateCache:(id)a4;
- (id)initWithVO2MaxQuantity:(id)a0 biologicalSex:(long long)a1 age:(long long)a2 date:(id)a3;

@end
