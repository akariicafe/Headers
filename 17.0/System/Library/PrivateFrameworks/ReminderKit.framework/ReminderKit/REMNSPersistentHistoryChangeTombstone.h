@class NSDictionary, NSUUID;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone;
@property (readonly) NSUUID *uuidForChangeTracking;

+ (BOOL)supportsSecureCoding;

- (id)externalIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)objectIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)daIsEventOnlyContainer;
- (id)shareeDisplayName;
- (id)assignmentOwningReminderIdentifier;
- (id)dueDateDeltaAlertReminderIdentifier;
- (id)hashtagLabelUUIDForChangeTracking;
- (id)hashtagName;
- (id)hashtagReminderIdentifier;
- (id)remObjectIdentifier;
- (id)shareeAddress;
- (id)shareeOwningListIdentifier;
- (id)syncActivityUUIDForChangeTracking;

@end
