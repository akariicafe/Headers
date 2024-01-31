@class EDInMemoryThreadQueryHandler, EDPrecomputedThreadQueryHandler, EMObjectID, EDThreadMigrator;

@interface _EDThreadQueryUnderlyingHandlers : NSObject

@property (retain, nonatomic) EMObjectID *inMemoryObservationID;
@property (retain, nonatomic) EMObjectID *precomputedObservationID;
@property (retain, nonatomic) EDInMemoryThreadQueryHandler *inMemoryQueryHandler;
@property (retain, nonatomic) EDPrecomputedThreadQueryHandler *precomputedQueryHandler;
@property (retain, nonatomic) EDThreadMigrator *threadMigrator;

- (void).cxx_destruct;
- (BOOL)_isCurrentObservationToken:(id)a0;

@end
