@class NSArray;

@interface CAMVideoThumbnailOutputConfiguration : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly, nonatomic) NSArray *filters;

- (id)initWithThumbnailSize:(struct CGSize { double x0; double x1; })a0 filters:(id)a1;
- (id)initWithMode:(long long)a0;
- (void).cxx_destruct;

@end
