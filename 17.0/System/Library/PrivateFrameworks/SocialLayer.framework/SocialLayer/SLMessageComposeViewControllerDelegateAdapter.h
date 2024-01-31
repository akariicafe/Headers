@class NSString;

@interface SLMessageComposeViewControllerDelegateAdapter : NSObject <MFMessageComposeViewControllerDelegate>

@property (copy, nonatomic) id /* block */ resultHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;

@end
