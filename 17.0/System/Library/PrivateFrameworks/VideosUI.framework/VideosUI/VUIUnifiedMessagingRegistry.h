@class NSPointerArray, NSNumber;

@interface VUIUnifiedMessagingRegistry : NSObject {
    BOOL _newTeamsAdded;
    BOOL _teamsRemoved;
}

@property (retain, nonatomic) NSPointerArray *buttonViews;
@property (readonly, nonatomic) BOOL hasActiveButtons;
@property (readonly, nonatomic) NSNumber *hasFavoriteTeams;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasActiveButtonsNoLock;
- (void)_notifyButtonsChanged;
- (void)_notifyButtonsChangedAction;
- (void)postNotificationFavoriteTeamsDidChange;
- (void)register:(long long)a0 newTeamsAdded:(BOOL)a1 teamsRemoved:(BOOL)a2;
- (void)registerDownloadButton:(id)a0;
- (void)unRegisterDownloadButton:(id)a0;

@end
