@interface MRSharedSettings : NSObject

@property (class, readonly, nonatomic) MRSharedSettings *currentSettings;

@property (readonly, nonatomic, getter=isMultiplayerAware) BOOL multiplayerAware;
@property (readonly, nonatomic, getter=isMultiplayerHost) BOOL multiplayerHost;
@property (readonly, nonatomic) BOOL canHostMultiplayerStream;
@property (readonly, nonatomic) BOOL supportNanoStandalone;
@property (readonly, nonatomic) BOOL supportShowMore;
@property (readonly, nonatomic) BOOL supportNowPlayingSessionDataSource;
@property (readonly, nonatomic) BOOL supportSessionBasedUI;
@property (readonly, nonatomic) BOOL supportSessionBasedLockScreenPlatter;
@property (readonly, nonatomic) BOOL supportLockScreenBackground;
@property (readonly, nonatomic) double quickControlsInactiveTimeout;
@property (readonly, nonatomic) double lockScreenAPLTarget;
@property (readonly, nonatomic) double lockScreenAPLRatio;
@property (readonly, nonatomic) BOOL supportGroupSession;
@property (readonly, nonatomic) BOOL supportGroupSessionHome;
@property (readonly, nonatomic) BOOL allowSingleRoomExpandedRows;
@property (readonly, nonatomic) BOOL showMembersInsteadOfRooms;
@property (readonly, nonatomic) double oneTapSuggestionInactiveTimeout;
@property (readonly, nonatomic) double autoRouteInactiveTimeout;

@end
