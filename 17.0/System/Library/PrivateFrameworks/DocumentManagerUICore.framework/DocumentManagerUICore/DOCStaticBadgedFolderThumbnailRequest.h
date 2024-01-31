@class DOCThumbnailDescriptor;

@interface DOCStaticBadgedFolderThumbnailRequest : DOCThumbnailRequest {
    unsigned long long _folderType;
    DOCThumbnailDescriptor *_descriptor;
}

- (void).cxx_destruct;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)a0;
- (id)initWithFolderType:(unsigned long long)a0 descriptor:(id)a1;

@end
