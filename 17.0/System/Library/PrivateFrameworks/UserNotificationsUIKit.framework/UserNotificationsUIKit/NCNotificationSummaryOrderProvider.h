@class UIView, NSArray, NSString, NSUUID, NSDate, DNDMode, UITapGestureRecognizer;
@protocol NCNotificationSummaryOrderProviderDelegate;

@interface NCNotificationSummaryOrderProvider : NSObject <PLContentSizeCategoryAdjusting>

@property (retain, nonatomic) UITapGestureRecognizer *summaryPlatterViewTapGestureRecognizer;
@property (copy, nonatomic) NSArray *cachedOrderedNotificationGroupLists;
@property (weak, nonatomic) id<NCNotificationSummaryOrderProviderDelegate> delegate;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (nonatomic) long long atxDigestDeliveryTime;
@property (copy, nonatomic) NSDate *summaryDate;
@property (copy, nonatomic) NSString *summaryHeading;
@property (retain, nonatomic) DNDMode *dndMode;
@property (nonatomic, getter=isOnboardingSummary) BOOL onboardingSummary;
@property (readonly, nonatomic) UIView *leadingSummaryPlatterView;
@property (readonly, copy, nonatomic) NSUUID *atxUUID;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)atxDigestGeneratorClient;
+ (id)atxQueue;
+ (id)notificationSummaryOrderProviderOfType:(unsigned long long)a0;

- (id)init;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)listComponentDelegate;
- (id)materialGroupNameBase;
- (void).cxx_destruct;
- (void)generateDigestForATXUserNotificationArrays:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)updateLeadingSummaryPlatterView;
- (BOOL)_shouldAllowTapOnLeadingSummaryPlatterView;
- (void)_tapOnSummaryPlatterView;
- (void)_updateNotificationOrderingForGroupList:(id)a0 byATXDigestNotificationGroup:(id)a1;
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(BOOL)a0;
- (void)atxLogSummaryPlatterRemoval;
- (void)atxLogSummaryPlatterShownIsUpcoming:(BOOL)a0;
- (id)atxUserNotificationsArrayForNotificationGroupLists:(id)a0;
- (id)atxUserNotificationsForNotificationRequests:(id)a0;
- (id)clearControlViewForLeadingSummaryPlatterView;
- (void)configureSummaryContentDisplaying:(id)a0 withSummaryContentProviding:(id)a1;
- (unsigned long long)currentNotificationCount;
- (id)filterPresentNotificationGroupsInDigestNotificationGroups:(id)a0;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;
- (unsigned long long)notificationCountForNotificationGroupLists:(id)a0;
- (id)notificationRequestsInNotificationGroupLists:(id)a0;
- (id)orderedNotificationGroupLists:(id)a0 forATXUserNotificationDigestNotificationGroup:(id)a1 orderGroupNotifications:(BOOL)a2;
- (id)representativeNotificationGroupListInGroupLists:(id)a0 forATXUserNotificationDigestNotificationGroup:(id)a1;
- (id)representativeNotificationRequestsForNotificationGroupLists:(id)a0;
- (id)titlesForSectionListsInSummary;
- (void)updateSummaryOrderWithNotificationGroupLists:(id)a0 reloadDigest:(BOOL)a1;
- (void)updatedOrderedGroupLists;

@end
