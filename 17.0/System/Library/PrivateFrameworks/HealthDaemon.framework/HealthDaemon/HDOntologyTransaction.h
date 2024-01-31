@class HDSimpleGraphDatabase, HDProfile, HDDatabaseTransaction;

@interface HDOntologyTransaction : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDDatabaseTransaction *databaseTransaction;
@property (readonly, nonatomic) HDSimpleGraphDatabase *graphDatabase;
@property (readonly, nonatomic) BOOL isWriteTransaction;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseTransaction:(id)a0 graphDatabase:(id)a1 isWriteTransaction:(BOOL)a2;

@end
