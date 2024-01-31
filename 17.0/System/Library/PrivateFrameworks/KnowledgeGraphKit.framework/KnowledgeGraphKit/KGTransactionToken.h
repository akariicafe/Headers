@class NSString;

@interface KGTransactionToken : NSObject

@property (readonly, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) unsigned long long transactionSequenceNumber;

- (void).cxx_destruct;
- (BOOL)isEqualToToken:(id)a0;
- (id)initForGraph:(id)a0 transactionSequence:(unsigned long long)a1;
- (id)initForGraph:(id)a0 withString:(id)a1;
- (id)initForGraphIdentifier:(id)a0 transactionSequence:(unsigned long long)a1;

@end
