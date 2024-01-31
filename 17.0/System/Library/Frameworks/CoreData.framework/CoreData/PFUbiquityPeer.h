@class NSString, NSSet;

@interface PFUbiquityPeer : NSManagedObject

@property (retain, nonatomic) NSString *peerKey;
@property (retain, nonatomic) NSString *peerCode;
@property (retain, nonatomic) NSSet *remoteStates;
@property (retain, nonatomic) NSSet *primaryKeyRanges;
@property (retain, nonatomic) NSSet *transactionEntries;
@property (retain, nonatomic) NSSet *localPeerStates;

@end
