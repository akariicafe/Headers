@class NSString, PFUbiquityPeer, NSNumber, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerState : NSManagedObject

@property (retain, nonatomic) NSString *lastProcessedTransactionLogURL;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) PFUbiquityPeer *peer;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;

- (id)initWithStoreName:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
