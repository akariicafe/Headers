@class NSString, QLItem, QLThumbnailRepresentation, QLThumbnailVersion, QLItemThumbnailGenerator;

@interface QLSingleItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocolInternal, NSSecureCoding> {
    QLThumbnailRepresentation *_thumbnailRepresentation;
    QLThumbnailVersion *_version;
    struct CGSize { double width; double height; } _thumbnailSize;
    BOOL _isRepresentative;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) QLItemThumbnailGenerator *thumbnailGenerator;
@property (weak, nonatomic) QLItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithItem:(id)a0;
- (void)_generateUncachedThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 contentMode:(unsigned long long)a1 thumbnailVersion:(id)a2 completionBlock:(id /* block */)a3;
- (void)_handleThumbnailGenerationFinishedWithThumbnailRepresentation:(id)a0 size:(struct CGSize { double x0; double x1; })a1 version:(id)a2 clientCompletionBlock:(id /* block */)a3;
- (void)_thumbnailVersionForItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)generateThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 completionBlock:(id /* block */)a1;
- (void)generateThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 contentMode:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (id)genericIconWithSize:(struct CGSize { double x0; double x1; })a0;

@end
