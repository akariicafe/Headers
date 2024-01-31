@class CNContactStore, NSCache, NSString;
@protocol IMAssistantCoreTelephonySubscriptionsDataSource, IMLocationManager, IMAssistantCommSafetyManager, IMAssistantContactsDataSource, IMAssistantAccountDataSource, IMAssistantFileManager, IMAssistantChatDataSource, IMFileTransferCenter;

@interface IMAssistantMessageHandlerDefaultDataSource : NSObject <IMAssistantMessageHandlerDataSource>

@property (nonatomic) BOOL didRegisterForContactStoreChangeNotifications;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<IMAssistantContactsDataSource> contactsDataSource;
@property (readonly, nonatomic) id<IMAssistantChatDataSource> chatDataSource;
@property (readonly, nonatomic) id<IMAssistantAccountDataSource> accountDataSource;
@property (readonly, nonatomic) id<IMAssistantCoreTelephonySubscriptionsDataSource> coreTelephonySubscriptionsDataSource;
@property (readonly, nonatomic) id<IMLocationManager> locationManagerDataSource;
@property (readonly, nonatomic) id<IMAssistantFileManager> fileManagerDataSource;
@property (readonly, nonatomic) id<IMFileTransferCenter> fileTransferCenterDataSource;
@property (readonly, nonatomic) id<IMAssistantCommSafetyManager> commSafetyDataSource;
@property (readonly, nonatomic) NSCache *handleToContactIdentifierCache;
@property (readonly, nonatomic) NSCache *spiHandleToPersonCache;
@property (readonly, nonatomic) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property (readonly, nonatomic) BOOL isInternationalSpamFilteringEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)contactStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)registerForContactStoreChangeNotificationsIfNecessary;
- (BOOL)screentimeAllowedToShowChat:(id)a0 error:(id *)a1;
- (BOOL)screentimeAllowedToShowConversationWithHandleIDs:(id)a0 error:(id *)a1;

@end
