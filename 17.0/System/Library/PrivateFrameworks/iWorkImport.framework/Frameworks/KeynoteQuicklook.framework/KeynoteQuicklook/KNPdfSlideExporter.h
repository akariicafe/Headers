@class NSString, TSUProgress;

@interface KNPdfSlideExporter : KNSlideExporter <TSKEncryptedDocumentExporter>

@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) TSUProgress *progress;
@property (readonly, nonatomic) BOOL needsSupplementalFiles;
@property (copy, nonatomic) NSString *typeUTI;
@property (readonly, nonatomic) NSString *savePanelMessage;
@property (readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property (readonly, nonatomic) BOOL isExportSupported;
@property (readonly, nonatomic) BOOL canExportInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPassphrase:(id)a0 hint:(id)a1;
- (void)setCopyPassphrase:(id)a0 hint:(id)a1;
- (void)setPrintPassphrase:(id)a0 hint:(id)a1;
- (id)p_renderingExporterDelegate;
- (BOOL)validatePassphrases:(id *)a0;

@end
