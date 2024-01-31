@class NSString, NSDate;

@interface StoredProofingBiomeData : NSManagedObject

@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic) BOOL isDonated;
@property (nonatomic, copy) NSDate *optInDate;
@property (nonatomic) BOOL optInStatus;
@property (nonatomic, copy) NSString *proofingDecision;
@property (nonatomic, copy) NSString *proofingSessionID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
