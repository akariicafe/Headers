@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)newMailboxRepository;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newClientResumerWithClientState:(id)a0;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newActivityRegistry;
- (id)sharedDonationController;
- (id)newAccountRepository;
- (id)newOutgoingMessageRepository;
- (id)newFetchController;
- (id)newSenderRepository;
- (void).cxx_destruct;
- (id)sharedInteractionLogger;
- (id)newVIPManagerInterface;
- (void)test_tearDown;
- (id)newSearchableIndex;

@end
