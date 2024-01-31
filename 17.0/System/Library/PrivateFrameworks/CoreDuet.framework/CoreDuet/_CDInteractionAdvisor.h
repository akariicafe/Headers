@class NSError, NSXPCConnection;

@interface _CDInteractionAdvisor : NSObject <_CDInteractionAdvising> {
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSError *error;

+ (id)interactionAdvisor;

- (void)dealloc;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (id)adviseInteractionsUsingSettings:(id)a0;
- (id)adviseInteractionsForDate:(id)a0 usingSettings:(id)a1;
- (id)adviseInteractionsForKeywordsInString:(id)a0 usingSettings:(id)a1;
- (id)adviseSocialInteractionsForDate:(id)a0 andSeedContacts:(id)a1 usingSettings:(id)a2;
- (id)rankCandidateContacts:(id)a0 usingSettings:(id)a1;
- (void)tuneSocialAdvisorUsingSettings:(id)a0 heartBeatHandler:(id)a1;

@end
