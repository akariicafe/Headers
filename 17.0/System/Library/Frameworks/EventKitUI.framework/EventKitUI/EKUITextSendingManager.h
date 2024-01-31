@class NSString, UIViewController, MFMessageComposeViewController;

@interface EKUITextSendingManager : NSObject <MFMessageComposeViewControllerDelegate> {
    MFMessageComposeViewController *_composeViewController;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ messageSendingComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressesForRecipientsOnEvent:(id)a0;
+ (BOOL)canSendMessageToRecipientsOnEvent:(id)a0;
+ (void)getPhone:(id *)a0 andEmail:(id *)a1 forContact:(id)a2;
+ (BOOL)messagingAvailable;

@end
