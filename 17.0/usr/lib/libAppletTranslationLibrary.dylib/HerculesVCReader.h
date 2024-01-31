@interface HerculesVCReader : NSObject

+ (id)getBalanceForPass:(unsigned long long)a0 withRiderClass:(unsigned char)a1 withTransitSummary:(id)a2 withRTAData:(id)a3 forCity:(id)a4 withError:(id *)a5;
+ (id)getCurrentTransitSummary:(id)a0 withError:(id *)a1;
+ (id)readBalancesFromVC:(id)a0 forCity:(id)a1 withError:(id *)a2;

@end
