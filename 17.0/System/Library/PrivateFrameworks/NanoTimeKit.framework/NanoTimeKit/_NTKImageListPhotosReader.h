@class NSMutableArray;

@interface _NTKImageListPhotosReader : NTKPhotosReader {
    NSMutableArray *_photos;
}

- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)initWithResourceDirectory:(id)a0;

@end
