@class NSURL, ICAccount;

@interface ICAttachmentPaperBundleModel : ICAttachmentModel

@property (readonly, nonatomic) ICAccount *account;
@property (readonly, nonatomic) NSURL *paperCoherenceContextURL;
@property (readonly, nonatomic) NSURL *paperBundleURL;
@property (readonly, nonatomic) NSURL *paperBundleDatabaseSubdirectoryURL;
@property (readonly, nonatomic) NSURL *paperBundleAssetsSubdirectoryURL;

+ (void)generateFallbackPDFDataForAttachment:(id)a0 completion:(id /* block */)a1;
+ (id)paperBundleURLForAttachmentIdentifier:(id)a0 inAccount:(id)a1;

- (void).cxx_destruct;
- (id)fallbackPDFData;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (id)archivePaperBundleToDiskWithError:(id *)a0;
- (BOOL)providesStandaloneTitleForNote;
- (BOOL)restorePaperBundleFromArchiveURL:(id)a0 error:(id *)a1;
- (id)standaloneTitleForNote;

@end
