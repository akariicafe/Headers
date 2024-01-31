@class NSString, NSSet;

@interface ManagedSkillLevelIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogWorkoutSkillLevels;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
