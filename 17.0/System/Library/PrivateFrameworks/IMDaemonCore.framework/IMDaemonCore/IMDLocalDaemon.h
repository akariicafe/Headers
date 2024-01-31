@protocol IMLocalDaemonProtocol;

@interface IMDLocalDaemon : NSObject

@property (class, retain, nonatomic) id<IMLocalDaemonProtocol> sharedDaemon;

@end
