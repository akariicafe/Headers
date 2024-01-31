@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date;

+ (BOOL)prekeyShouldBeRolled:(id)a0;
+ (id)nowDate;
+ (id)oldestDateAllowedToSendTo;
+ (void)setNowDate:(id)a0;
+ (id)debugDescriptionForAction:(unsigned long long)a0;
+ (id)sharedManager;
+ (BOOL)prekeyCanBeDeleted:(id)a0;
+ (double)timeIntervalAllowedForAction:(unsigned long long)a0;
+ (BOOL)validateFetchedPrekeyTimestamp:(double)a0 forEvaluationType:(unsigned long long)a1;

- (void).cxx_destruct;

@end
