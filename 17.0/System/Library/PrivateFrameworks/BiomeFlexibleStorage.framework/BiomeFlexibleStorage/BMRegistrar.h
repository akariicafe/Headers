@class NSDictionary;
@protocol BMAccessAssertion;

@interface BMRegistrar : BMSQLStore {
    id<BMAccessAssertion> _accessAssertion;
}

@property (readonly, nonatomic) NSDictionary *registeredClientsByStream;
@property (readonly, nonatomic) NSDictionary *streamRegistrationCounts;

+ (id)migrations;
+ (id)centralRegistrar;
+ (id)managedStreamIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRegistrarURL:(id)a0;
- (BOOL)propagateDeletionOfEvents:(id)a0;
- (BOOL)propagateDeletionOfEventsInStream:(id)a0 withIdentifiers:(id)a1;
- (BOOL)registerClientWithBundleID:(id)a0 databaseURL:(id)a1 source:(id)a2;
- (void)registerSiriRemembersClients;
- (id)registrationsForStream:(id)a0;

@end
