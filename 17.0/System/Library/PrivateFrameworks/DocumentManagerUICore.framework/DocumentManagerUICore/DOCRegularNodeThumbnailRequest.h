@class QLThumbnailGenerationRequest, DOCThumbnailFolderIcon, QLThumbnailGenerator;

@interface DOCRegularNodeThumbnailRequest : DOCThumbnailRequest {
    QLThumbnailGenerator *_thumbnailGenerator;
    QLThumbnailGenerationRequest *_thumbnailRequest;
    DOCThumbnailFolderIcon *_folderIcon;
    unsigned long long _style;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)a0;
- (id)initWithNode:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;

@end
