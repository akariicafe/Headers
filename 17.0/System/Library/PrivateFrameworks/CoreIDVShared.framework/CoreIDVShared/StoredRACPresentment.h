@class NSString, StoredRACCredential;

@interface StoredRACPresentment : NSManagedObject

@property (nonatomic, copy) NSString *analyticsID;
@property (nonatomic, copy) NSString *presentmentID;
@property (nonatomic, retain) StoredRACCredential *credential;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
