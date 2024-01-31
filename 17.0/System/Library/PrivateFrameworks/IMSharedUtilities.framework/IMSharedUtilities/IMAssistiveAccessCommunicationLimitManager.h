@class NSArray, CNFavorites;

@interface IMAssistiveAccessCommunicationLimitManager : NSObject

@property (class, readonly, nonatomic) IMAssistiveAccessCommunicationLimitManager *sharedManager;

@property (retain, nonatomic) CNFavorites *favorites;
@property (readonly, nonatomic) BOOL shouldFilterIncomingMessages;
@property (readonly, nonatomic) NSArray *selectedContactHandleStrings;

- (void).cxx_destruct;
- (BOOL)allowsConversationWithHandleIDs:(id)a0;
- (BOOL)allowsSendingToHandleIDs:(id)a0;
- (id)_handleStringForFavoritesEntry:(id)a0;
- (BOOL)_isAllowedIncomingContact:(id)a0;
- (BOOL)_isSelectedContact:(id)a0;
- (id)_selectedContactFavoritesEntries;

@end
