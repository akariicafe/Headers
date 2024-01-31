@class NSString, GKGameInternal, NSDate;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (id)status;
- (void).cxx_destruct;
- (void)setStatus:(id)a0;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:(id)a0;
- (id)lastPlayedGame;
- (int)defaultFamiliarity;
- (BOOL)isFriend;
- (void)setLastPlayedGame:(id)a0;

@end
