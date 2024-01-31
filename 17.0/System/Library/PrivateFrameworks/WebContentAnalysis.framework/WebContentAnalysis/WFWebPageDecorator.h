@class NSString, WFImgArrayCache, NSObject;
@protocol WFWebPageProtocol;

@interface WFWebPageDecorator : NSObject <WFWebPageProtocol> {
    NSObject<WFWebPageProtocol> *webPageStripper;
    WFImgArrayCache *pageImagesPropertyCache;
}

@property (retain) NSString *URLString;

+ (id)_plainTextWithSelector:(SEL)a0 object:(id)a1;
+ (id)plainTextWithWebPageData:(id)a0;
+ (id)plainTextWithWebPageString:(id)a0;
+ (id)webPageWithData:(id)a0;
+ (id)webPageWithData:(id)a0 URLString:(id)a1;
+ (id)webPageWithString:(id)a0;
+ (id)webPageWithString:(id)a0 URLString:(id)a1;

- (void)dealloc;
- (id)tags;
- (id)images;
- (id)links;
- (long long)wordCount;
- (long long)numberOfImages;
- (id)plainText;
- (id)pageContent;
- (id)pageTitle;
- (id)metaTagsLabeled;
- (BOOL)hasShortRefresh;
- (id)metaTagKeywords;
- (void)_cacheImgProperties;
- (BOOL)hasFrameset;
- (id)imageAltsText;
- (id)initWithWebPageData:(id)a0;
- (id)initWithWebPageString:(id)a0;
- (id)initWithWebPageStripper:(id)a0;
- (id)linkTitlesText;
- (id)metaTagDescription;
- (id)metaTagsUnlabeled;
- (long long)numberOfKnownImagePixels;
- (long long)numberOfUnknownSizedImages;
- (id)plainTextAttributeWithSelector:(SEL)a0 title:(id)a1;
- (id)plainTextAttributeWithSelector:(SEL)a0 title:(id)a1 weight:(int)a2;
- (id)rawPlainText;
- (id)scriptBlocks;

@end
