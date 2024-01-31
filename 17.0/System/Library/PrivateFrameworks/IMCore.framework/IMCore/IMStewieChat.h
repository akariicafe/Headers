@class IMDaemonController;
@protocol IMDaemonProtocol;

@interface IMStewieChat : NSObject

@property (retain, nonatomic) IMDaemonController<IMDaemonProtocol> *daemon;

- (id)initWithDaemon:(id)a0;
- (id)init;
- (void)dealloc;
- (void)sendQuestionnaire:(id)a0;
- (void)locationUpdateDelivered:(id)a0;
- (void).cxx_destruct;
- (void)setUpConnectionToDaemaon;
- (void)openStewieChatWithContext:(id)a0;
- (void)daemonConnectionLost;
- (void)daemonControllerDidDisconnect;

@end
