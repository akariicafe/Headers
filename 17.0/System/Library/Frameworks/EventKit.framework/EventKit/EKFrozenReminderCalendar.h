@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)remObjectID;
- (id)symbolicColorName;
- (id)_account;
- (id)publishURLString;
- (id)sharees;
- (id)image;
- (id)externalID;
- (id)syncError;
- (int)flags;
- (id)unlocalizedTitle;
- (BOOL)isPublished;
- (id)allAlarms;
- (BOOL)isColorDisplayOnly;
- (int)allowedEntities;
- (id)colorStringRaw;
- (void).cxx_destruct;
- (unsigned long long)sharingStatus;
- (id)uniqueIdentifier;
- (id)source;
- (id)title;
- (id)UUID;
- (id)sharedOwnerName;
- (int)displayOrder;
- (id)_list;
- (id)calendarIdentifier;
- (id)REMColorFromEKHexColorString:(id)a0;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)frozenReminderSource;
- (id)hexColorStringFromREMColor:(id)a0;
- (id)initNewListInStore:(id)a0;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;

@end
