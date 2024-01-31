@class NSString, NSSet, NSDate, IRCandidatesContainerMO;

@interface IRCandidateMO : NSManagedObject

@property (retain, nonatomic) NSString *candidateIdentifier;
@property (retain, nonatomic) NSDate *lastSeenDate;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (retain, nonatomic) IRCandidatesContainerMO *candidatesContainer;
@property (retain, nonatomic) NSSet *nodes;

+ (id)fetchRequest;
+ (id)MOCandidate:(id)a0 candidatesContainerMO:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfCandidateMO:(id)a0 withCandidate:(id)a1 managedObjectContext:(id)a2;

- (id)convert;

@end
