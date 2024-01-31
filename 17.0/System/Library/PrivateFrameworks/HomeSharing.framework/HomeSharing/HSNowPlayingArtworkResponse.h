@class NSData, NSString;

@interface HSNowPlayingArtworkResponse : HSResponse

@property (retain, nonatomic) NSData *artworkData;
@property (retain, nonatomic) NSString *artworkMIMEType;

- (void).cxx_destruct;

@end
