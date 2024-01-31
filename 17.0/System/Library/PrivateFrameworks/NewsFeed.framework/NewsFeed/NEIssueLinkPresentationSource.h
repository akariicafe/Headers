@class LPLinkMetadata, NSString, NSURL, LPImage;

@interface NEIssueLinkPresentationSource : NSObject <NELinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) LPImage *linkPresentationImage;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)linkPresentationImageFromIssue:(id)a0;
- (id)titleFromIssue:(id)a0;
- (id)initWithIssue:(id)a0;
- (id)subtitleFromIssue:(id)a0;
- (id)urlFromIssue:(id)a0;

@end
