@class NSString;

@interface SWRemoveParticipantAlertController : UIViewController {
    NSString *_messageText;
}

+ (id)alertControllerWithParticipant:(id)a0 highlight:(id)a1;

- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)_initWithParticipant:(id)a0 highlight:(id)a1;

@end
