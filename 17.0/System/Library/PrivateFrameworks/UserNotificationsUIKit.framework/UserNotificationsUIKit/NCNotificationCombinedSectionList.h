@class NSMutableArray;

@interface NCNotificationCombinedSectionList : NCNotificationStructuredSectionList {
    BOOL _adjustsFontForContentSizeCategory;
}

@property (retain, nonatomic) NSMutableArray *sectionLists;
@property (retain, nonatomic) NSMutableArray *chronologicalSectionLists;

- (void)setAdjustsFontForContentSizeCategory:(BOOL)a0;
- (void)insertNotificationSectionListChronologically:(id)a0 animated:(BOOL)a1;
- (void)insertNotificationSectionList:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)orderedNotificationListComponents;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (BOOL)containsSectionList:(id)a0;
- (unsigned long long)count;
- (BOOL)containsNotificationRequest:(id)a0;
- (id)allNotificationRequests;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (void)_performOperationOnAllSectionLists:(id /* block */)a0;
- (void)_invalidateSectionListViewForChronologicalSectionsIfNecessary;
- (void)clearAll;
- (void)setDeviceAuthenticated:(BOOL)a0;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 sectionType:(unsigned long long)a1;
- (unsigned long long)indexOfSectionList:(id)a0;
- (void)removeNotificationSectionList:(id)a0 animated:(BOOL)a1;
- (unsigned long long)notificationCount;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)expandGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)adjustsFontForContentSizeCategory;
- (void)sortNotificationGroupListsIfNecessary;
- (void)collapseGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)hasVisibleContentToReveal;
- (id)_allSectionLists;
- (void)reloadNotificationRequest:(id)a0;
- (void)notificationListBaseComponentDidRemoveAll:(id)a0;
- (void)mergeNotificationGroups:(id)a0 reorderGroupNotifications:(BOOL)a1;
- (id)sectionListAtIndex:(unsigned long long)a0;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (void)toggleFilteringForSectionIdentifier:(id)a0 shouldFilter:(BOOL)a1;

@end
