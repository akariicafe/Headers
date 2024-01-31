@class NSArray, NSData;

@interface EKiMIPCancel : EKiMIPHandler {
    NSArray *_attendees;
    NSData *_attachmentData;
}

+ (BOOL)shouldSendEmailForEvent:(id)a0 removedAttendees:(id *)a1;

- (void).cxx_destruct;
- (id)attendees;
- (id)attachmentData;
- (id)emailAttachmentName;
- (id)emailBody;
- (id)emailSubject;
- (int)icsMethod;
- (id)initWithEvent:(id)a0 andAttendees:(id)a1;

@end
