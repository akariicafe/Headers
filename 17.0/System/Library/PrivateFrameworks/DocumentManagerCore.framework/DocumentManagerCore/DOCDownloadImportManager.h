@interface DOCDownloadImportManager : NSObject

- (id)interface;
- (void)importPlaceholderAtURLToDownloadsDirectory:(id)a0 completion:(id /* block */)a1;
- (void)replacePlaceholder:(id)a0 withFinalFileURL:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_doc_destinationLocationExists:(long long)a0;
- (id)_moveItemAtURL:(id)a0 toNamedLocation:(long long)a1 error:(id *)a2;

@end
