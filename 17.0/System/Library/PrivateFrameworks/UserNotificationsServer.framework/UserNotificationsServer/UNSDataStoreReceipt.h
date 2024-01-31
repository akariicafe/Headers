@class NSArray;

@interface UNSDataStoreReceipt : NSObject

@property (readonly, nonatomic) NSArray *addedObjects;
@property (readonly, nonatomic) NSArray *replacedObjects;
@property (readonly, nonatomic) NSArray *replacementObjects;
@property (readonly, nonatomic) NSArray *removedObjects;

+ (id)receiptWithAddedObjects:(id)a0 replacedObjects:(id)a1 replacementObjects:(id)a2 removedObjects:(id)a3;

- (BOOL)hasChanges;
- (void).cxx_destruct;
- (id)initWithAddedObjects:(id)a0 replacedObjects:(id)a1 replacementObjects:(id)a2 removedObjects:(id)a3;

@end
