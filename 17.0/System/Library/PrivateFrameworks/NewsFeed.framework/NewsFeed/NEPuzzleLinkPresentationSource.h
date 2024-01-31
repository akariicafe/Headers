@class LPLinkMetadata, NSString, NSURL, LPImage;

@interface NEPuzzleLinkPresentationSource : NSObject <NELinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) LPImage *linkPresentationImage;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)initWithPuzzle:(id)a0;
- (id)linkPresentationImageFromPuzzle:(id)a0;
- (id)subtitleFromPuzzle:(id)a0;
- (id)titleFromPuzzle:(id)a0;
- (id)urlFromPuzzle:(id)a0;

@end
