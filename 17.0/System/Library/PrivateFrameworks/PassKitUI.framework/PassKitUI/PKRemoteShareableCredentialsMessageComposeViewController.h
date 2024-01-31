@class NSString;
@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;

@interface PKRemoteShareableCredentialsMessageComposeViewController : _UIRemoteViewController <PKRemoteShareableCredentialsMessageComposeViewControllerProtocol> {
    BOOL _finished;
}

@property (weak, nonatomic) id<PKShareableCredentialsMessageComposeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)messageComposeViewControllerDidFinishWithResult:(BOOL)a0;

@end
