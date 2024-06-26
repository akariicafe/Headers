@class NSDate, GKGameInternal, NSString, NSArray, GKMessageInboxEntryInternal, NSDictionary, CNContact, NSNumber;

@interface GKPlayerInternal : GKInternalRepresentation {
    union { struct { unsigned char _unused : 8; unsigned char _purpleBuddyAccount : 1; unsigned char _underage : 1; unsigned char _photoPending : 1; unsigned char _findable : 1; unsigned char _defaultNickname : 1; unsigned char _defaultPrivacyVisibility : 1; unsigned char _defaultContactsIntegrationConsent : 1; unsigned int _reserved : 18; } ; unsigned int _value; } _flags;
}

@property (nonatomic) unsigned int flags;
@property (retain) NSString *playerID;
@property (retain) NSString *teamPlayerID;
@property (retain) NSString *gamePlayerID;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSNumber *avatarType;
@property (retain, nonatomic) NSDictionary *photos;
@property (readonly, nonatomic) BOOL isFriend;
@property (readonly, nonatomic) BOOL isLocalPlayer;
@property (readonly, nonatomic) BOOL isAnonymousPlayer;
@property (readonly, nonatomic) BOOL isUnknownPlayer;
@property (readonly, nonatomic) BOOL isAutomatchPlayer;
@property (readonly, nonatomic) BOOL isLoaded;
@property (readonly, nonatomic) BOOL isGuestPlayer;
@property (nonatomic) BOOL isInContacts;
@property (nonatomic) unsigned short numberOfFriendsInCommon;
@property (nonatomic) unsigned short numberOfGamesInCommon;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSNumber *friendLevel;
@property (retain, nonatomic) NSNumber *friendBiDirectional;
@property (retain, nonatomic) NSNumber *friendPlayedWith;
@property (retain, nonatomic) NSNumber *friendPlayedNearby;
@property (retain, nonatomic) NSNumber *acceptedGameInviteFromThisFriend;
@property (retain, nonatomic) NSNumber *initiatedGameInviteToThisFriend;
@property (retain, nonatomic) NSNumber *automatchedTogether;
@property (retain, nonatomic) NSString *compositeName;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSDate *lastPlayedDate;
@property (retain, nonatomic) GKGameInternal *lastPlayedGame;
@property (retain, nonatomic) NSString *guestIdentifier;
@property (retain, nonatomic) NSString *messagesID;
@property (nonatomic) unsigned short numberOfFriends;
@property (nonatomic) unsigned short numberOfGames;
@property (nonatomic) unsigned int numberOfAchievements;
@property (nonatomic) unsigned int numberOfAchievementPoints;
@property (retain, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSArray *friends;
@property (nonatomic, getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount;
@property (nonatomic, getter=isUnderage) BOOL underage;
@property (nonatomic, getter=isFindable) BOOL findable;
@property (nonatomic, getter=isDefaultNickname) BOOL defaultNickname;
@property (nonatomic, getter=isDefaultPrivacyVisibility) BOOL defaultPrivacyVisibility;
@property (nonatomic, getter=isDefaultContactsIntegrationConsent) BOOL defaultContactsIntegrationConsent;
@property (nonatomic, getter=isPhotoPending) BOOL photoPending;
@property (nonatomic) unsigned short numberOfRequests;
@property (nonatomic) unsigned short numberOfTurns;
@property (nonatomic) unsigned short numberOfChallenges;
@property (nonatomic) unsigned long long lastWelcomeWhatsNewCopyVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (retain, nonatomic) NSString *lastProfilePrivacyVersionDisplayed;
@property (retain, nonatomic) NSString *lastFriendSuggestionsVersionDisplayed;
@property (retain, nonatomic) NSString *lastContactsIntegrationConsentVersionDisplayed;
@property (nonatomic) int achievementsVisibility;
@property (nonatomic) int friendsVisibility;
@property (nonatomic) int gamesPlayedVisibility;
@property (nonatomic) int contactsIntegrationConsent;
@property (retain, nonatomic) NSString *contactsAssociationID;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSDate *serviceLastUpdatedTimestamp;
@property (nonatomic) int globalFriendListAccess;
@property (nonatomic) BOOL isArcadeSubscriber;
@property (retain, nonatomic) GKMessageInboxEntryInternal *inboxEntry;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;
+ (Class)classForFamiliarity:(int)a0;
+ (id)compositeNameForFirstName:(id)a0 lastName:(id)a1;
+ (id)displayNameWithOptions:(unsigned char)a0 alias:(id)a1 composite:(id)a2;

- (id)firstName;
- (void)setFirstName:(id)a0;
- (id)cacheKey;
- (id)lastName;
- (void)setLastName:(id)a0;
- (id)accountName;
- (unsigned long long)hash;
- (void)setFriends:(id)a0;
- (id)friends;
- (void)setAccountName:(id)a0;
- (void)setFlags:(unsigned int)a0;
- (id)status;
- (unsigned int)flags;
- (id)conciseDescription;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void)setStatus:(id)a0;
- (id)compositeName;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:(id)a0;
- (id)displayNameWithOptions:(unsigned char)a0;
- (id)lastPlayedGame;
- (void)setCompositeName:(id)a0;
- (void)setDefaultNickname:(BOOL)a0;
- (id)guestIdentifier;
- (id)minimalInternal;
- (BOOL)allowNearbyMultiplayer;
- (int)defaultFamiliarity;
- (int)globalFriendListSharingStatus;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfRequests;
- (unsigned short)numberOfTurns;
- (id)serverRepresentation;
- (void)setAllowNearbyMultiplayer:(BOOL)a0;
- (void)setDefaultContactsIntegrationConsent:(BOOL)a0;
- (void)setDefaultPrivacyVisibility:(BOOL)a0;
- (void)setFindable:(BOOL)a0;
- (void)setLastPlayedGame:(id)a0;
- (void)setNumberOfChallenges:(unsigned short)a0;
- (void)setNumberOfRequests:(unsigned short)a0;
- (void)setNumberOfTurns:(unsigned short)a0;
- (void)setPhotoPending:(BOOL)a0;
- (void)setPurpleBuddyAccount:(BOOL)a0;
- (void)setUnderage:(BOOL)a0;
- (void)stripPIIs;

@end
