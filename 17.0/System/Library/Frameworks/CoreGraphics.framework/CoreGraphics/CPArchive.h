@class NSData, NSMutableString;

@interface CPArchive : NSObject <CPDisposable> {
    struct __CFArray { } *selections;
    struct __CFArray { } *imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (void)addSelection:(struct CGPDFSelection { } *)a0;
- (id)html;
- (id)plainText;
- (id)webArchiveData;

@end
