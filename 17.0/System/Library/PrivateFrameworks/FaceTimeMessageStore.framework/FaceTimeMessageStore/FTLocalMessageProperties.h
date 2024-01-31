@class NSUUID;

@interface FTLocalMessageProperties : NSManagedObject

@property (nonatomic, copy) NSUUID *recordUUID;
@property (nonatomic) int voicemailID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
