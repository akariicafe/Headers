@class NSString, SIPixelBufferWrapper;

@interface SIImageInputData : NSObject <SIData> {
    SIPixelBufferWrapper *_inputImageBufferWrapper;
    SIPixelBufferWrapper *_inputDepthBufferWrapper;
}

@property (nonatomic) double timestamp;
@property (nonatomic) struct __CVBuffer { } *inputImageBuffer;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) struct __CVBuffer { } *inputDepthBuffer;
@property (nonatomic) int inputImageLuxValue;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } inputPose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)copyDataTo:(id)a0;

@end
