@class NSManagedObjectContext;

@interface ICPersistenceConfiguration : NSObject

@property (retain, nonatomic) NSManagedObjectContext *modernViewContext;
@property (readonly, nonatomic) NSManagedObjectContext *modernBackgroundContext;
@property (copy, nonatomic) id /* block */ makeModernBackgroundContext;
@property (retain, nonatomic) NSManagedObjectContext *legacyViewContext;
@property (readonly, nonatomic) NSManagedObjectContext *legacyBackgroundContext;
@property (copy, nonatomic) id /* block */ makeLegacyBackgroundContext;

- (void).cxx_destruct;

@end
