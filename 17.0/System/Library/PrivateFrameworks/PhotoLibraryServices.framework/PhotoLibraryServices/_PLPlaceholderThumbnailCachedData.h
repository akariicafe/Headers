@class NSData;

@interface _PLPlaceholderThumbnailCachedData : NSObject {
    NSData *_imageData;
    int _width;
    int _height;
    int _bytesPerRow;
    int _dataWidth;
    int _dataHeight;
    int _imageDataOffset;
}

- (void).cxx_destruct;
- (id)imageDataWithWidth:(int *)a0 height:(int *)a1 bytesPerRow:(int *)a2 dataWidth:(int *)a3 dataHeight:(int *)a4 imageDataOffset:(int *)a5;
- (id)initWithImageData:(id)a0 width:(int)a1 height:(int)a2 bytesPerRow:(int)a3 dataWidth:(int)a4 dataHeight:(int)a5 imageDataOffset:(int)a6;

@end
