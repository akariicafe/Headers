@class NSDictionary;

@interface IMDualSIMUtilitiesManager : NSObject

@property (class, readonly, nonatomic) IMDualSIMUtilitiesManager *sharedManager;

@property (retain, nonatomic) NSDictionary *conversationListSIMShortNameDictionary;

+ (id)_localizedShortNameForSIMID:(id)a0;
+ (id)_updateConversationListSIMShortNamesDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)activeSIMIDs;
- (id)shortNameForSIMLabel:(id)a0;
- (void)_handleSIMSubscriptionsUpdate;

@end
