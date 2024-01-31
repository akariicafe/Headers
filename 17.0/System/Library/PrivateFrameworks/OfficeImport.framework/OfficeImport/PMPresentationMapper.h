@class NSString, OIXMLDocument, PDPresentation, NSMutableArray, OIXMLElement;

@interface PMPresentationMapper : CMDocumentMapper <CMMapperRoot> {
    int mWidth;
    NSMutableArray *mSlideNames;
    NSMutableArray *mSlideGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    unsigned int mNextCommit;
    unsigned int mCurrentSlide;
    BOOL mHasPushedFirstSlides;
}

@property (readonly) PDPresentation *document;

- (void).cxx_destruct;
- (id)documentTitle;
- (struct CGSize { double x0; double x1; })slideSize;
- (void)_pushEmptySlideWithMessage:(id)a0;
- (id)blipAtIndex:(unsigned int)a0;
- (id)defaultStyleSheet;
- (void)finishMappingWithState:(id)a0;
- (id)initWithDocument:(id)a0 archiver:(id)a1;
- (void)mapElement:(id)a0 atIndex:(unsigned long long)a1 withState:(id)a2 isLastElement:(BOOL)a3;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (struct CGSize { double x0; double x1; })pageSizeForDeviceIncludingMargins:(BOOL)a0;
- (void)setHtmlDocumentSizeInArchiver;
- (void)startMappingWithState:(id)a0;

@end
