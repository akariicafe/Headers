@class NSArray;

@interface BLItemImageCollection : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *itemImages;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_imagesForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_newImagesForDictionary:(id)a0;
- (id)bestImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)imagesForKind:(id)a0;
- (id)imagesForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImageCollection:(id)a0;
- (id)initWithItemImages:(id)a0;

@end
