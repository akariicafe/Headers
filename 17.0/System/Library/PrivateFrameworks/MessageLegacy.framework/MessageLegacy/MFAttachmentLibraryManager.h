@interface MFAttachmentLibraryManager : MFAttachmentComposeManager

- (void)dealloc;
- (id)_dataProviderForAttachmentURL:(id)a0 error:(id *)a1;
- (id)attachmentsForMessage:(id)a0 withSchemes:(id)a1;
- (id)initWithPrimaryLibrary:(id)a0;
- (void)removeProviderForBaseURL:(id)a0;
- (void)_messageAttachmentStorageLocationsDidChangeNotification:(id)a0;

@end
