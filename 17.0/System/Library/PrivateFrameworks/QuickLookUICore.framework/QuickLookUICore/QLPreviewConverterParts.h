@class NSData, NSString, NSURL, NSError, NSThread, NSSet, NSURLResponse, NSURLConnection;

@interface QLPreviewConverterParts : QLPreviewParts {
    void *_convertFunction;
    NSURLResponse *previewResponse;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    BOOL computed;
    BOOL cancelled;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL progressive;
@property (retain, nonatomic) NSURLConnection *connection;
@property (nonatomic) BOOL shouldRemoveURLAfterGeneration;
@property (weak, nonatomic) id delegate;
@property BOOL htmlErrorDisabled;
@property (readonly, nonatomic) NSURLResponse *previewResponse;
@property (readonly, nonatomic) NSSet *attachmentURLs;
@property (readonly) long long pageCount;
@property (readonly) float pageWidth;
@property (readonly) float pageHeight;
@property (readonly, getter=isComputed) BOOL computed;
@property (readonly, getter=isCancelled) BOOL cancelled;

+ (void)registerPreview:(id)a0;
+ (void)unregisterPreview:(id)a0;
+ (Class)urlProtocolClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)cancel;
- (id)previewRequest;
- (id)safeRequestForRequest:(id)a0;
- (void)appendData:(id)a0 forURL:(id)a1 lastChunk:(BOOL)a2;
- (void)computePreview;
- (void)computePreviewInThread;
- (id)mimeTypeForAttachmentURL:(id)a0;
- (id)newAttachmentURLWithID:(id)a0 properties:(id)a1;
- (void)registerURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (void)startComputingPreview;
- (void)startDataRepresentationWithContentType:(id)a0 properties:(id)a1;

@end
