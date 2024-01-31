@class QLThumbnailGenerationRequest, QLThumbnailGenerator;

@interface DOCIconThumbnailRequest : DOCThumbnailRequest {
    QLThumbnailGenerationRequest *_request;
    QLThumbnailGenerator *_thumbnailGenerator;
}

- (void).cxx_destruct;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)a0;
- (id)initWithNode:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;
- (id)initWithURL:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;

@end
