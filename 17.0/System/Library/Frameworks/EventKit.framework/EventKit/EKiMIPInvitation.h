@class NSSet;

@interface EKiMIPInvitation : EKiMIPUpdate {
    NSSet *_attendees;
}

+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;

- (void).cxx_destruct;
- (id)attendees;
- (id)emailBody;
- (id)emailSubject;
- (id)initWithEvent:(id)a0 withDiff:(id)a1;

@end
