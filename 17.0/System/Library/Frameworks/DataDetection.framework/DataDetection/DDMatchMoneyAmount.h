@class NSString;

@interface DDMatchMoneyAmount : DDMatch

@property (readonly, nonatomic) NSString *currency;
@property (readonly, nonatomic) double amount;

- (void).cxx_destruct;
- (id)initWithDDScannerResult:(id)a0;

@end
