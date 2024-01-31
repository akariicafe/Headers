@class ASCAppOfferStateCenter;

@interface ASCWatchApps : NSObject

@property (class, readonly) ASCWatchApps *sharedWatchApps;

@property (readonly, nonatomic) ASCAppOfferStateCenter *appOfferStateCenter;

- (void).cxx_destruct;
- (id)reinstallSystemAppWithBundleID:(id)a0;
- (id)reinstallAppWithID:(id)a0;
- (id)initWithAppOfferStateCenter:(id)a0;

@end
