@class ISImageCache, NSArray;

@interface ISImageBagIcon : ISIcon {
    NSArray *_decorations;
}

@property (retain) ISImageCache *imageCache;
@property (readonly) NSArray *images;

- (id)initWithImages:(id)a0;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (id)imageForImageDescriptor:(id)a0;
- (id)initWithImages:(id)a0 decorations:(id)a1;
- (id)_generateImageWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageBag:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)decorations;

@end
