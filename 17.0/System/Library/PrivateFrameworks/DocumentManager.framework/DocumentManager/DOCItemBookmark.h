@class NSString, FPItem, UTType, NSURL, FPSandboxingURLWrapper;

@interface DOCItemBookmark : NSObject <NSSecureCoding> {
    FPSandboxingURLWrapper *_wrapper;
    BOOL _needsToBeImported;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) UTType *contentType;
@property (retain) NSString *bookmarkableString;
@property (retain) FPItem *fileProviderItem;
@property (copy, nonatomic) NSURL *fileURL;

+ (id)_contentTypeForURL:(id)a0;
+ (void)_fetchDocumentURLFromBookmarkableString:(id)a0 completion:(id /* block */)a1;
+ (id)_wrapperForURL:(id)a0 error:(id *)a1;
+ (id)documentsURLsForItemBookmarks:(id)a0;
+ (BOOL)isAnyFPItemAFault:(id)a0;
+ (BOOL)isAnyItemBookmarkAFault:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)convertAndCopyURLToInbox:(id)a0 ofType:(id)a1 conversionRules:(id)a2 completion:(id /* block */)a3;
- (id)coordinatedFileURL;
- (void)copyURLToInbox:(id)a0 completion:(id /* block */)a1;
- (id)initWithBookmarkableString:(id)a0 fileProviderItem:(id)a1;
- (id)initWithURL:(id)a0 fileProviderItem:(id)a1;
- (BOOL)needsToBeImported;
- (void)prepareForMode:(unsigned long long)a0 usingBookmark:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)prepareForMode:(unsigned long long)a0 usingBookmark:(BOOL)a1 shouldConvert:(BOOL)a2 conversionRules:(id)a3 completionBlock:(id /* block */)a4;
- (void)setNeedsToBeImported:(BOOL)a0;

@end
