@class NSData, NSString, NSURL, NSArray, WebFrame, WebArchive, NSDictionary, NSURLResponse, NSURLRequest, WebResource, NSMutableURLRequest;
@protocol WebDocumentRepresentation;

@interface WebDataSource : NSObject {
    void *_private;
}

@property (readonly, nonatomic) NSDictionary *_quickLookContent;
@property (copy, nonatomic, setter=_setQuickLookContent:) NSDictionary *_quickLookContent;
@property (nonatomic, setter=_setQuickLookPreviewLoaderClient:) void *_quickLookPreviewLoaderClient;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) id<WebDocumentRepresentation> representation;
@property (readonly, nonatomic) WebFrame *webFrame;
@property (readonly, nonatomic) NSURLRequest *initialRequest;
@property (readonly, nonatomic) NSMutableURLRequest *request;
@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, copy, nonatomic) NSString *textEncodingName;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, copy, nonatomic) NSString *pageTitle;
@property (readonly, nonatomic) NSURL *unreachableURL;
@property (readonly, nonatomic) WebArchive *webArchive;
@property (readonly, nonatomic) WebResource *mainResource;
@property (readonly, copy, nonatomic) NSArray *subresources;

+ (void)initialize;
+ (id)_repTypesAllowImageTypeOmission:(BOOL)a0;
+ (Class)_representationClassForMIMEType:(id)a0 allowingPlugins:(BOOL)a1;

- (void)dealloc;
- (id)dataSourceDelegate;
- (id)initWithRequest:(id)a0;
- (id)_URL;
- (id)_responseMIMEType;
- (id)_webView;
- (id)subresourceForURL:(id)a0;
- (void)setDataSourceDelegate:(id)a0;
- (void)_receivedData:(id)a0;
- (void)_finishedLoading;
- (struct NakedPtr<WebCore::DocumentLoader> { struct DocumentLoader *x0; })_documentLoader;
- (id)_imageElementWithImageResource:(id)a0;
- (BOOL)_isDocumentHTML;
- (id)_documentFragmentWithImageResource:(id)a0;
- (void)addSubresource:(id)a0;
- (void)_addSubframeArchives:(id)a0;
- (id)_documentFragmentWithArchive:(id)a0;
- (id)_initWithDocumentLoader:(void *)a0;
- (id)_mainDocumentError;
- (void)_makeRepresentation;
- (void)_replaceSelectionWithArchive:(id)a0 selectReplacement:(BOOL)a1;
- (void)_revertToProvisionalState;
- (void)_setAllowToBeMemoryMapped;
- (void)_setDeferMainResourceDataLoad:(BOOL)a0;
- (void)_setMainDocumentError:(id)a0;
- (void)_setOverrideTextEncodingName:(id)a0;
- (void)_setRepresentation:(id)a0;

@end
