@class NSMutableOrderedSet;

@interface _HFCharacteristicReadAndWriteTransactions : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *transactionsReading;
@property (retain, nonatomic) NSMutableOrderedSet *transactionsWriting;

- (id)init;
- (void).cxx_destruct;

@end
