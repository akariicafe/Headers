@class NSMutableDictionary, NSURL, NSMutableSet, NSURLRequest;

@interface QLPreviewParts : NSObject

@property (retain, nonatomic) NSURL *previewURL;
@property (retain, nonatomic) NSMutableSet *outstandingURLs;
@property (retain, nonatomic) NSMutableDictionary *encodingsForURLs;
@property (retain, nonatomic) NSMutableSet *registeredURLs;
@property (readonly, nonatomic) NSURLRequest *previewRequest;

+ (void)registerPreview:(id)a0;
+ (void)unregisterPreview:(id)a0;
+ (Class)urlProtocolClass;
+ (id)registeredPreviewForURL:(id)a0;
+ (id)relativeStringForSafeURL:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)requestForURL:(id)a0;
- (void)appendData:(id)a0 forURL:(id)a1 lastChunk:(BOOL)a2;
- (void)computePreviewInThread;
- (id)newAttachmentURLWithID:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (void)registerURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (void)startComputingPreview;
- (id)voidRequest;
- (void)computePreview:(id /* block */)a0;
- (unsigned int)cfEncodingForAttachmentURL:(id)a0;
- (BOOL)isRegisteredURL:(id)a0;
- (id)newSafeAttachmentURLWithID:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (void)startAttachmentWithURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (void)startDataRepresentationWithMimeType:(id)a0 textEncoding:(id)a1;

@end
