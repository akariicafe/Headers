@class NSArray, NSNumber;

@interface PADFrame : NSObject {
    id _buffer;
}

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct __CVBuffer { } *buffer;
@property (retain, nonatomic) NSArray *faces;
@property (nonatomic) unsigned int orientation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (retain, nonatomic) NSNumber *gestureToDetect;
@property (readonly, nonatomic) double timestamp;

+ (id)cvPixelBufferFromData:(id)a0;

- (id)init;
- (void)dealloc;
- (void)setBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)buffer;
- (void).cxx_destruct;

@end
