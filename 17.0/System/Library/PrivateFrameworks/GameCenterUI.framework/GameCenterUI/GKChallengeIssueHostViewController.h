@class NSString, GKHostedChallengeIssueController;

@interface GKChallengeIssueHostViewController : GKExtensionRemoteViewController <GKChallengeIssueHostProtocol>

@property (weak, nonatomic) GKHostedChallengeIssueController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)challengeExtension;

@end
