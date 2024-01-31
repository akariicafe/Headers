@class NSString, NSURL, LPLinkMetadata;
@protocol NETagImageShareAttributeProviderType, FCSportsProviding;

@interface NESportsTagLinkPresentationSource : NSObject <NELinkPresentationSource>

@property (readonly, nonatomic) id<FCSportsProviding> sportsTag;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) id<NETagImageShareAttributeProviderType> tagImageProvider;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

+ (id)iconItemProviderForSportsTag:(id)a0 tagImageProvider:(id)a1;
+ (id)imageItemProviderForSportsTag:(id)a0 tagImageProvider:(id)a1;

- (void).cxx_destruct;
- (id)initWithSportsTag:(id)a0 tagImageProvider:(id)a1;
- (id)initWithTitle:(id)a0 url:(id)a1 sportsTag:(id)a2 tagImageProvider:(id)a3;

@end
