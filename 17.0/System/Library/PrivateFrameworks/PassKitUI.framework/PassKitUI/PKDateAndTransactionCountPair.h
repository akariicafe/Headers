@class NSDate;

@interface PKDateAndTransactionCountPair : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long transactionCount;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
