@class SYDocumentSender, NSObject;
@protocol OS_dispatch_queue;

@interface SYDocumentSenderAvatar : NSObject {
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (readonly, nonatomic) SYDocumentSender *documentSender;

- (void).cxx_destruct;
- (id)_createAvatarImageRenderer;
- (id)_createContactFromPersonNameComponents:(id)a0;
- (id)_createRenderingScopeWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 isRTL:(BOOL)a2;
- (id)_defaultThumbnailImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 isRTL:(BOOL)a2;
- (id)_renderAvatarImageForContact:(id)a0 renderer:(id)a1 renderingScope:(id)a2;
- (id)_renderAvatarImageWithRenderer:(id)a0 renderingScope:(id)a1;
- (id)fetchThumbnailImages;
- (id)fetchThumbnailImagesWithScale:(double)a0 isRTL:(BOOL)a1;
- (void)fetchThumbnailImagesWithScale:(double)a0 isRTL:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithDocumentSender:(id)a0;

@end
