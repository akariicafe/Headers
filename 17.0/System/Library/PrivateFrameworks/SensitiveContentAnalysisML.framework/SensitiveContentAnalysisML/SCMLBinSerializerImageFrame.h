@class NSString, NSData;

@interface SCMLBinSerializerImageFrame : NSObject

@property (retain) NSString *recordID;
@property (retain) NSData *imageData;

- (struct CGImage { } *)cgImage;
- (id)data;
- (id)initWithKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)name;
- (struct __CVBuffer { } *)pixelBuffer;
- (id)ciImage;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(id)a0;

@end
