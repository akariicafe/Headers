@class NSString, _WKAttachmentInfo;

@interface _WKAttachment : NSObject <WKObject> {
    struct ObjectStorage<API::Attachment> { struct type { unsigned char __lx[72]; } data; } _attachment;
}

@property (readonly, nonatomic) _WKAttachmentInfo *info;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)requestInfo:(id /* block */)a0;
- (void)setData:(id)a0 newContentType:(id)a1;
- (void)setData:(id)a0 newContentType:(id)a1 newFilename:(id)a2 completion:(id /* block */)a3;
- (void)setFileWrapper:(id)a0 contentType:(id)a1 completion:(id /* block */)a2;

@end
