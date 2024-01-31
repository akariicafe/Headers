@class NSString, CHHandle, NSSet;

@interface CHManagedHandle : NSManagedObject

@property (readonly, nonatomic) CHHandle *chHandle;
@property (copy, nonatomic) NSString *normalizedValue;
@property (nonatomic) short type;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSSet *localParticipantCalls;
@property (retain, nonatomic) NSSet *remoteParticipantCalls;

+ (id)fetchRequest;
+ (id)managedHandleForHandle:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedHandlesForHandles:(id)a0 inManagedObjectContext:(id)a1;

- (id)copyWithContext:(id)a0;

@end
