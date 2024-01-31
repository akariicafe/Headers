@class NSSet;

@interface WFCoreDataChangeNotification : NSObject

@property (readonly, nonatomic) BOOL invalidatedAllObjects;
@property (readonly, nonatomic) NSSet *updated;
@property (readonly, nonatomic) NSSet *inserted;
@property (readonly, nonatomic) NSSet *deleted;
@property (readonly, nonatomic) int processIdentifier;

- (BOOL)hasChanges;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)insertedDescriptors;
- (BOOL)appliesToResultState:(id)a0;
- (id)deletedDescriptors;
- (id)initWithInvalidatedAllObjects:(BOOL)a0 updated:(id)a1 inserted:(id)a2 deleted:(id)a3 processIdentifier:(int)a4;
- (id)notificationByMergingChangesFromNotification:(id)a0;
- (BOOL)originatedInCurrentProcess;
- (id)updatedDescriptors;

@end
