@class LPLinkMetadata, NSString, NSItemProvider, NSURL;

@interface NESportsEventLinkPresentationSource : NSObject <NELinkPresentationSource>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSItemProvider *linkPresentationImageProvider;
@property (readonly, nonatomic) NSItemProvider *linkPresentationIconProvider;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

+ (id)iconItemProviderForSportsEvent:(id)a0 tagImageProvider:(id)a1;
+ (id)imageItemProviderForSportsEvent:(id)a0 tagImageProvider:(id)a1;
+ (id)titleFromSportsEvent:(id)a0;
+ (id)urlFromSportsEvent:(id)a0;

- (void).cxx_destruct;
- (id)initWithSportsEvent:(id)a0 tagImageProvider:(id)a1;
- (id)initWithTitle:(id)a0 url:(id)a1 sportsEvent:(id)a2 tagImageProvider:(id)a3;

@end
