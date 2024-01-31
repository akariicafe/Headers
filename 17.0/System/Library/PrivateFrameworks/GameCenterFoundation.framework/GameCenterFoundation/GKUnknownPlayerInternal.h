@interface GKUnknownPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (BOOL)isUnknownPlayer;
- (id)gamePlayerID;
- (id)teamPlayerID;

@end
