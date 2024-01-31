@class NSString, NSURL, LPLinkMetadata;

@interface NEChannelLinkPresentationSource : NSObject <NELinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
