@class FMAttributedStringRendererOptions;

@interface FMAttributedStringRenderer : NSObject

@property (readonly, nonatomic) FMAttributedStringRendererOptions *options;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)imageForAttributedString:(id)a0 width:(double)a1;
- (id)_imageFromTextStorage:(id)a0 width:(double)a1 showExclusionPaths:(BOOL)a2;
- (struct CGSize { double x0; double x1; })_sizeFromTextStorage:(id)a0;
- (id)_textStorageForAttributedString:(id)a0 width:(double)a1 options:(id)a2;
- (id)imageForAttributedString:(id)a0 width:(double)a1 options:(id)a2;
- (id)imageForAttributedString:(id)a0 width:(double)a1 showExclusionPaths:(BOOL)a2 options:(id)a3;

@end
