@class GKTurnBasedMatchmakerViewController, NSString;

@interface GKTurnBasedMatchmakerHostViewController : GKExtensionRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol>

@property (weak, nonatomic) GKTurnBasedMatchmakerViewController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)turnBasedMatchmakerExtension;

- (void).cxx_destruct;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)messageFromExtension:(id)a0;
- (void)refreshMatches;
- (void)setMatchRequestInternal:(id)a0;
- (void)setShowExistingMatches:(BOOL)a0;
- (void)setShowPlay:(BOOL)a0;
- (void)setShowQuit:(BOOL)a0;

@end
