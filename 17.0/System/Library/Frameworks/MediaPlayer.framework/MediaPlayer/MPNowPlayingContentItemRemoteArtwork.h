@class NSString, NSData;

@interface MPNowPlayingContentItemRemoteArtwork : NSObject

@property (readonly, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) NSData *artworkURLTemplateData;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArtworkURLString:(id)a0 templateData:(id)a1;

@end
