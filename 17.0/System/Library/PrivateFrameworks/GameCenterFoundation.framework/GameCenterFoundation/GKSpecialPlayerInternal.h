@interface GKSpecialPlayerInternal : GKPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (BOOL)isLoaded;
- (void)setAlias:(id)a0;
- (void)setPlayerID:(id)a0;
- (id)alias;
- (id)photos;
- (void)setPhotos:(id)a0;
- (id)compositeName;
- (id)gamePlayerID;
- (void)setGamePlayerID:(id)a0;
- (void)setTeamPlayerID:(id)a0;
- (id)teamPlayerID;

@end
