@class NSString, NSData;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {
    BOOL _keepAlive;
}

@property (retain, nonatomic) NSString *artworkIdentifier;
@property (retain, nonatomic) NSData *artworkData;

- (void)discardContentIfPossible;
- (BOOL)beginContentAccess;
- (void).cxx_destruct;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;

@end
