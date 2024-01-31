@class NSUUID, VUIndexObservation;

@interface VUIndexTag : NSManagedObject

@property (nonatomic) BOOL isPrimary;
@property (nonatomic) BOOL resolved;
@property (nonatomic) short type;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, retain) VUIndexObservation *observation;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
