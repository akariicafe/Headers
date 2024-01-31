@interface SLSoftLinks : NSObject

+ (BOOL)canSendText;
+ (id)newComposeViewControllerDelegateInstance:(id /* block */)a0;
+ (id)newComposeViewControllerInstanceWithDelegate:(id)a0 itemProvider:(id)a1 collaborationOptions:(id)a2 collaborationMetadata:(id)a3;
+ (id)newComposeViewControllerInstance;

@end
