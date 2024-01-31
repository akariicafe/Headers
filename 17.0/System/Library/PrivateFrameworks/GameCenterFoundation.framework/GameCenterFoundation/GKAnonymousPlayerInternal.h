@interface GKAnonymousPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (id)alias;
- (BOOL)isEqual:(id)a0;
- (id)gamePlayerID;
- (BOOL)isAnonymousPlayer;
- (id)teamPlayerID;

@end
