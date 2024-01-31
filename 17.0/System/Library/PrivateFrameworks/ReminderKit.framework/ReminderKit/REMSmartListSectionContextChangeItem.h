@class REMSmartListChangeItem, NSArray, REMMemberships;

@interface REMSmartListSectionContextChangeItem : NSObject

@property (retain, nonatomic) REMSmartListChangeItem *smartListChangeItem;
@property (nonatomic) BOOL shouldUpdateSectionsOrdering;
@property (retain, nonatomic) NSArray *unsavedSectionIDsOrdering;
@property (retain, nonatomic) REMMemberships *unsavedMembershipsOfRemindersInSections;

- (void).cxx_destruct;
- (void)undeleteSectionWithID:(id)a0;
- (id)initWithSmartListChangeItem:(id)a0;

@end
