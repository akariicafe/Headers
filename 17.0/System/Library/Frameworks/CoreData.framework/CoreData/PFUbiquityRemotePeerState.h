@class NSNumber, NSString, PFUbiquityPeer;

@interface PFUbiquityRemotePeerState : NSManagedObject

@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) NSString *peerID;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) PFUbiquityPeer *peer;

- (id)initWithStoreName:(id)a0 andRemotePeerID:(id)a1 insertIntoManagedObjectContext:(id)a2;

@end
