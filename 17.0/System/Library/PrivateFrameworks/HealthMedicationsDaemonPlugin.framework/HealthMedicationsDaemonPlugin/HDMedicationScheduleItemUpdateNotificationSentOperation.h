@class NSString;

@interface HDMedicationScheduleItemUpdateNotificationSentOperation : HDJournalableOperation {
    NSString *_itemIdentifier;
    BOOL _notificationSent;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithScheduleItemIdentifier:(id)a0 notificationSent:(BOOL)a1;

@end
