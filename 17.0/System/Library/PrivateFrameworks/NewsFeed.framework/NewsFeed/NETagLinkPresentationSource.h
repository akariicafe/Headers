@class NELinkMetadataSource, LPLinkMetadata;

@interface NETagLinkPresentationSource : NSObject <NELinkPresentationSource>

@property (readonly, nonatomic) NELinkMetadataSource *linkMetadataSource;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)initWithTag:(id)a0 image:(id)a1;
- (id)initWithTitle:(id)a0 url:(id)a1 image:(id)a2;

@end
