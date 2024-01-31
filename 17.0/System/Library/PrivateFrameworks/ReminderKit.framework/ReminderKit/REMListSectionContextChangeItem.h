@class NSArray, REMMemberships, REMListChangeItem;

@interface REMListSectionContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (nonatomic) BOOL shouldUpdateSectionsOrdering;
@property (retain, nonatomic) NSArray *unsavedSectionIDsOrdering;
@property (retain, nonatomic) REMMemberships *unsavedMembershipsOfRemindersInSections;

- (void).cxx_destruct;
- (id)initWithListChangeItem:(id)a0;
- (void)undeleteSectionWithID:(id)a0;

@end
