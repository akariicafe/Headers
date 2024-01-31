@class NSData, _SerializableCVPixelBuffer;

@interface HRTFSerializableCaptureData : NSObject <NSSecureCoding> {
    _SerializableCVPixelBuffer *_serializableColorPixelBuffer;
    _SerializableCVPixelBuffer *_serializableDepthPixelBuffer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __CVBuffer { } *colorPixelBuffer;
@property (readonly, nonatomic) struct __CVBuffer { } *depthPixelBuffer;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } colorIntrinsics;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } depthIntrinsics;
@property (readonly, nonatomic) NSData *distortionLookupTable;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceDimensions;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } distortionCenter;
@property (readonly, nonatomic) double timestamp;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithColorPixelBuffer:(struct __CVBuffer { } *)a0 depthPixelBuffer:(struct __CVBuffer { } *)a1 colorIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 depthIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a3 distortionLookupTable:(id)a4 referenceDimensions:(struct CGSize { double x0; double x1; })a5 distortionCenter:(struct CGPoint { double x0; double x1; })a6 timestamp:(double)a7;

@end
