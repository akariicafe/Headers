@class LPLinkMetadata;

@interface NELinkMetadataSource : NSObject <NELinkPresentationSource>

@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)_linkPresentationImageFromImage:(id)a0;
- (id)initWithTitle:(id)a0 url:(id)a1 image:(id)a2;
- (id)initWithTitle:(id)a0 url:(id)a1 imageProvider:(id)a2 iconProvider:(id)a3;

@end
