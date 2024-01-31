@interface ParityChecks : NSObject

+ (BOOL)checkDaySummaryParityWithHKStore:(id)a0 asOfJulianDay:(long long)a1 error:(id *)a2;
+ (BOOL)checkPredictionParityWithHKHealthStore:(id)a0 withDayInputs:(id)a1 asOfJulianDay:(long long)a2 error:(id *)a3;

@end
