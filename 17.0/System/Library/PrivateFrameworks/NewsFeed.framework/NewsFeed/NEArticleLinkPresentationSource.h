@class LPLinkMetadata, NSString, NSURL, LPImage;

@interface NEArticleLinkPresentationSource : NSObject <NELinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) LPImage *linkPresentationImage;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

+ (double)deviceScreenScaleFromPotentialBackgroundThread;

- (void).cxx_destruct;
- (id)initWithHeadline:(id)a0 articleURL:(id)a1 selectedText:(id)a2;
- (id)linkPresentationImageFromHeadline:(id)a0;
- (id)titleFromHeadline:(id)a0;

@end
