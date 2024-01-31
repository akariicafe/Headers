@class NSString, NSSet, NSDate;

@interface StoredRACCredential : NSManagedObject

@property (nonatomic, copy) NSString *analyticsID;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic, copy) NSDate *lastReportTime;
@property (nonatomic, retain) NSSet *presentments;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
