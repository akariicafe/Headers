@class NSData, NSArray, NSString;

@interface HMICameraVideoFrame : HMFObject <NSSecureCoding, HMFLogging>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) NSData *jpegData;
@property (retain) NSArray *motionDetections;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTime;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long frameId;
@property (readonly) unsigned long long fragmentSequenceNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJPEGData:(id)a0 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 frameId:(unsigned long long)a2 fragmentSequenceNumber:(unsigned long long)a3 size:(struct CGSize { double x0; double x1; })a4;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 frameId:(unsigned long long)a2 fragmentSequenceNumber:(unsigned long long)a3;

@end
