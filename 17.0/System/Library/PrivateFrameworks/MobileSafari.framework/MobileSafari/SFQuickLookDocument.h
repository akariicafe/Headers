@class LSDocumentProxy, NSString, NSURL;
@protocol SFQuickLookDocumentSource;

@interface SFQuickLookDocument : NSObject {
    LSDocumentProxy *_documentProxy;
    NSString *_fileName;
    NSString *_savedPathWithProperExtension;
    BOOL _shouldDeleteSavedPath;
    BOOL _shouldDeleteSavedPathWithProperExtension;
}

@property (readonly, nonatomic) LSDocumentProxy *documentProxy;
@property (readonly, nonatomic) BOOL needsQuickLookDocumentView;
@property (readonly, copy, nonatomic) NSString *savedPath;
@property (readonly, copy, nonatomic) NSString *savedPathWithProperExtension;
@property (readonly, copy, nonatomic) NSURL *savedURLWithProperExtension;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSString *uti;
@property (readonly, copy, nonatomic) NSString *inferredUTI;
@property (readonly, copy, nonatomic) NSString *localizedType;
@property (retain, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) BOOL shouldUnzipByUIDocumentInteractionController;
@property (weak, nonatomic) id<SFQuickLookDocumentSource> documentSource;

+ (BOOL)_hasSuitableApplicationForOpeningDocument:(id)a0;
+ (id)properFilenameForOriginalFilename:(id)a0 typeIdentifier:(id)a1 mimeType:(id)a2 sourceURL:(id)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_deleteSavedPathIfNecessary;
- (void)_deleteSavedPathWithProperExtensionIfNecessary;
- (void)addQuickLookPrintSettingsToPrintInfo:(id)a0;
- (id)initWithFileName:(id)a0 mimeType:(id)a1 uti:(id)a2 needsQuickLookDocumentView:(BOOL)a3;
- (void)saveToFileIfNeeded;
- (void)setFileNameForPDFDocument:(id)a0;
- (void)setSavedPath:(id)a0 shouldDelete:(BOOL)a1;
- (void)setSavedPathWithProperExtension:(id)a0 shouldDelete:(BOOL)a1;

@end
