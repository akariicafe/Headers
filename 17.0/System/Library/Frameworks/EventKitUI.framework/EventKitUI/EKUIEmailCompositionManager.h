@class UIViewController, EKEvent, NSString, NSArray, MFMailComposeViewController;

@interface EKUIEmailCompositionManager : NSObject <MFMailComposeViewControllerDelegate> {
    NSArray *_participantRecipients;
    NSString *_subjectPrefix;
    NSString *_bodyPrefix;
}

@property (retain, nonatomic) EKEvent *event;
@property (retain, nonatomic) MFMailComposeViewController *composeViewController;
@property (copy) id /* block */ messageSendingComplete;
@property (readonly) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_recipientEmailAddressesToDisplayNames:(id)a0 withParticipantRecipients:(id)a1;
+ (BOOL)canShowViewControllerForEvent:(id)a0 withParticipantRecipients:(id)a1;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)_htmlBodyForMailMessageWithNames:(id)a0;
- (void)initViewController;
- (id)initWithEvent:(id)a0 participantRecipients:(id)a1 subjectPrefix:(id)a2 bodyPrefix:(id)a3;

@end
