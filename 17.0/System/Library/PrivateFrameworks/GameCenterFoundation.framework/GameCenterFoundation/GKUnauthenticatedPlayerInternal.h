@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal {
    int _encodingCount;
}

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (void)encodeWithCoder:(id)a0;
- (id)alias;
- (BOOL)isEqual:(id)a0;
- (id)gamePlayerID;
- (id)teamPlayerID;

@end
