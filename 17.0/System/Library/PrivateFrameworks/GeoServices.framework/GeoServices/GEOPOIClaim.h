@class NSURL, GEOPDPOIClaim;

@interface GEOPOIClaim : NSObject {
    GEOPDPOIClaim *_poiClaim;
}

@property (readonly, nonatomic, getter=isClaimed) BOOL claimed;
@property (readonly, nonatomic, getter=isClaimable) BOOL claimable;
@property (readonly, nonatomic) NSURL *claimURL;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPOIClaim:(id)a0;

@end
