@class NSString;

@interface _DPPrivacyBudgetRecordMO : NSManagedObject

@property (nonatomic) long long balance;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) double lastUpdate;
@property (nonatomic) double cohortAggregateBalance;

@end
