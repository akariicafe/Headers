@class NSArray, NSSet, NSDate;

@interface CLSInputTimeClue : CLSInputClue {
    NSArray *_dateComponentsArray;
    NSSet *_localDates;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSSet *_universalDates;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
}

@property (copy, nonatomic) NSArray *events;

+ (id)clueWithDates:(id)a0;

- (double)timeInterval;
- (id)localStartDate;
- (id)universalDates;
- (id)localEndDate;
- (id)description;
- (void).cxx_destruct;
- (id)universalEndDate;
- (id)universalStartDate;
- (unsigned long long)numberOfDays;
- (void)_computeDateProperties;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (BOOL)isEqualToClue:(id)a0;
- (id)localDates;

@end
