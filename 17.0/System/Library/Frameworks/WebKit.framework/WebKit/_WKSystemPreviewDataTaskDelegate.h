@class NSString;

@interface _WKSystemPreviewDataTaskDelegate : NSObject <_WKDataTaskDelegate> {
    void *_previewController;
    long long _expectedContentLength;
    struct RetainPtr<NSMutableData> { void *m_ptr; } _data;
    int _fileHandle;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } _filePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)completeLoad;
- (void)dataTask:(id)a0 didCompleteWithError:(id)a1;
- (void)dataTask:(id)a0 didReceiveData:(id)a1;
- (void)dataTask:(id)a0 didReceiveResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithSystemPreviewController:(void *)a0;
- (BOOL)isValidFileExtension:(id)a0;
- (BOOL)isValidMIMEType:(id)a0;

@end
