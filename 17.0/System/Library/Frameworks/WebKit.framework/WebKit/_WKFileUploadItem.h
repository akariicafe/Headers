@interface _WKFileUploadItem : NSObject {
    struct RetainPtr<NSURL> { void *m_ptr; } _fileURL;
}

@property (readonly, nonatomic, getter=isVideo) BOOL video;
@property (readonly, nonatomic) struct RetainPtr<UIImage> { void *x0; } displayImage;

- (void)setFileURL:(id)a0;
- (id)fileURL;
- (id)initWithFileURL:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
