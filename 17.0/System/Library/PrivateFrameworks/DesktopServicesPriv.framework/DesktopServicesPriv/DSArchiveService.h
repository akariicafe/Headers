@protocol DSArchiveServiceUnarchivingDelegate;

@interface DSArchiveService : NSObject <DSArchiveServiceStreamingInternal, DSArchiveServiceProtocol>

@property (weak, nonatomic) id<DSArchiveServiceUnarchivingDelegate> unarchivingDelegate;

- (void).cxx_destruct;
- (id)archiveItemsAtURLs:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 compressionFormat:(unsigned long long)a3 passphrase:(id)a4 completionHandler:(id /* block */)a5;
- (id)archiveItemsWithURLs:(id)a0 compressionFormat:(unsigned long long)a1 destinationFolderURL:(id)a2 completionHandler:(id /* block */)a3;
- (id)unarchiveItemAtURL:(id)a0 passphrase:(id)a1 destinationFolderURL:(id)a2 completionHandler:(id /* block */)a3;
- (id)unarchiveItemAtURL:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 acceptedFormats:(unsigned long long)a3 passphrases:(id)a4 completionHandler:(id /* block */)a5;
- (id)archiveItemsWithURLs:(id)a0 passphrase:(id)a1 addToKeychain:(BOOL)a2 compressionFormat:(unsigned long long)a3 destinationFolderURL:(id)a4 completionHandler:(id /* block */)a5;
- (void)itemDescriptorsForItemAtURL:(id)a0 passphrase:(id)a1 completionHandler:(id /* block */)a2;
- (void)itemDescriptorsForItemAtURL:(id)a0 passphrases:(id)a1 completionHandler:(id /* block */)a2;
- (void)receiveArchivedItemsDescriptors:(id)a0;
- (id)unarchiveItemAtURL:(id)a0 passphrases:(id)a1 addToKeychain:(BOOL)a2 destinationFolderURL:(id)a3 acceptedFormats:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (id)unarchiveItemAtURL:(id)a0 passphrases:(id)a1 destinationFolderURL:(id)a2 acceptedFormats:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)unarchiveItemAtURL:(id)a0 passphrases:(id)a1 destinationFolderURL:(id)a2 completionHandler:(id /* block */)a3;

@end
