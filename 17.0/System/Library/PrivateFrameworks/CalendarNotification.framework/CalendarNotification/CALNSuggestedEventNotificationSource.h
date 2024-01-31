@class NSString, NSArray;
@protocol CALNNotificationManager, CALNCalendarIconIdentifierProvider, CALNSuggestedEventNotificationDataSource;

@interface CALNSuggestedEventNotificationSource : NSObject <CALNNotificationSource>

@property (readonly, nonatomic) id<CALNSuggestedEventNotificationDataSource> dataSource;
@property (readonly, weak, nonatomic) id<CALNNotificationManager> notificationManager;
@property (readonly, nonatomic) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ignoreActionIdentifier;
+ (id)deleteActionIdentifier;
+ (id)_bundle;
+ (id)defaultSuggestedEventCategoryIdentifier;
+ (id)suggestedEventCanceledCategoryIdentifier;
+ (id)confirmActionIdentifier;
+ (id)coalescedSuggestedEventCategoryIdentifier;

- (id)contentForNotificationWithSourceClientIdentifier:(id)a0;
- (void)refreshNotifications:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 notificationManager:(id)a1 iconIdentifierProvider:(id)a2;
- (id)_sourceClientIdentifiersForObjectIDs:(id)a0;
- (void)didReceiveResponse:(id)a0;

@end
