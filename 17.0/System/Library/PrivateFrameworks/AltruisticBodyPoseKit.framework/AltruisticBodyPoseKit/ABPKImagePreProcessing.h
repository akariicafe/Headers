@class ABPKPaddingParams;

@interface ABPKImagePreProcessing : NSObject {
    ABPKPaddingParams *_paddingParameters;
    double _startScale;
    double _timeScale;
    double _startPadding;
    double _timePadding;
    double _startConvertYCbCrToBGRA;
    double _timeConvertYCbCrToBGRA;
    double _startConvertARGBToBGRA;
    double _timeConvertARGBToBGRA;
    double _startConvertGrayScaleToBGRA;
    double _timeConvertGrayScaleToBGRA;
    struct OpaqueVTPixelTransferSession { } *_vtPixelTransferSession;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_endARGBToBGRASignpost;
- (void)_endARGBToRGBASignpost;
- (void)_endGrayToBGRASignpost;
- (void)_endPaddingSignpost;
- (void)_endScaleSignpost;
- (void)_endYCbCrToARGBSignpost;
- (void)_startARGBToBGRASignpost;
- (void)_startARGBToRGBASignpost;
- (void)_startGrayToBGRASignpost;
- (void)_startPaddingSignpost;
- (void)_startScaleSignpost;
- (void)_startYCbCrToARGBSignpost;
- (id)initWithPreProcessingParams:(id)a0;
- (void)logProfilingDetails;
- (int)preprocessColorImage:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;
- (int)preprocessData:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;
- (int)preprocessGrayscaleImage:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;

@end
