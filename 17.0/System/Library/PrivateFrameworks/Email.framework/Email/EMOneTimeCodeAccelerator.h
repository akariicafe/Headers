@class NSObject, NSString, EMDaemonInterface;
@protocol OS_dispatch_queue, EFCancelable;

@interface EMOneTimeCodeAccelerator : NSObject <EMOneTimeCodeObserver_xpc>

@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) EMDaemonInterface *daemonInterface;
@property (retain) id<EFCancelable> cancelable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *oneTimeCodeQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUpdateBlock:(id /* block */)a0;
- (void)deleteOneTimeCodeEmails:(long long)a0;
- (void)didEnterOneTimeCodeField;
- (void)didExitOneTimeCodeField;
- (void)didFillOneTimeCode:(long long)a0;
- (void)didReceiveOneTimeCode:(id)a0 timestamp:(id)a1 messageID:(long long)a2 subject:(id)a3 senders:(id)a4 observers:(unsigned long long)a5;
- (id)initWithDaemonInterface:(id)a0 updateBlock:(id /* block */)a1;
- (void)startObservingOneTimeCode;

@end
