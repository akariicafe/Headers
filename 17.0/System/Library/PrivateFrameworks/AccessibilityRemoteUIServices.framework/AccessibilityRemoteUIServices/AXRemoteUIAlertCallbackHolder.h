@class SBSRemoteAlertHandle;

@interface AXRemoteUIAlertCallbackHolder : NSObject

@property (copy, nonatomic) id /* block */ presentationHandler;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;

- (void).cxx_destruct;

@end
