@class NSObject, RPRemoteDisplaySession;
@protocol OS_dispatch_queue;

@interface BCSContinuityCameraAction : BCSAction {
    RPRemoteDisplaySession *_remoteDisplaySession;
    NSObject<OS_dispatch_queue> *_remoteDisplaySessionQueue;
}

@property (nonatomic, getter=isConnecting) BOOL connecting;

- (id)shortDescription;
- (void).cxx_destruct;
- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)actionIcon;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (BOOL)isContinuityCameraAction;
- (void)performDefaultActionWithCompletionHandler:(id /* block */)a0;

@end
