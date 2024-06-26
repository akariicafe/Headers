@class CVAJasperDepthFrameProcessor, NSString, NSDictionary, NSMutableDictionary, NSError, NSNumber, CIContext;

@interface MOVReaderInterface : MOVStreamReader <MOVStreamReaderDelegate> {
    NSString *_osVersion;
    BOOL _imuLocationNil;
    BOOL _imuLocation0;
    BOOL _accelLocationNil;
    BOOL _accelLocation0;
    BOOL _gyroLocationNil;
    BOOL _gyroLocation0;
    BOOL _motionLocationNil;
    BOOL _motionLocation0;
    BOOL _deviceMotionLocationNil;
    BOOL _deviceMotionLocation0;
    BOOL _locationLocationNil;
    BOOL _locationLocation0;
    BOOL _compassLocationNil;
    BOOL _compassLocation0;
    double _lastDepthTOFTimestamp;
    CVAJasperDepthFrameProcessor *_jdfp;
    NSString *_jasperDepthPCStreamID;
    double _machTimeSince1970;
    int _jasperCounter;
    BOOL _jasperEnabled[16];
    NSMutableDictionary *_spuVersions;
}

@property (retain, nonatomic) NSDictionary *enforcedVideoTrackFormat;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceString;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *productConfig;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *spuIMUTrackName;
@property (retain, nonatomic) NSString *accelTrackName;
@property (retain, nonatomic) NSString *gyroTrackName;
@property (retain, nonatomic) NSString *motionTrackName;
@property (retain, nonatomic) NSString *deviceMotionTrackName;
@property (retain, nonatomic) NSString *locationTrackName;
@property (retain, nonatomic) NSString *alsTrackName;
@property (retain, nonatomic) NSString *wifiTrackName;
@property (retain, nonatomic) NSString *compassTrackName;
@property (retain, nonatomic) NSString *depthTOFTrackName;
@property (retain, nonatomic) NSString *userEventTrackName;
@property (retain, nonatomic) NSString *ryfTimedValueTrackName;
@property (retain, nonatomic) NSString *prDeviceTrackName;
@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSNumber *depthOutputFrameRate;
@property (readonly) NSNumber *depthSourceFrameRate;
@property (readonly) NSNumber *depthSourceMaxPoints;
@property (retain, nonatomic) NSMutableDictionary *streamFilters;
@property (retain, nonatomic) CIContext *filterContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)grabCMSessionID:(id)a0;
+ (id)grabJasperExtrinsics:(id)a0 backExtrinsics:(id)a1;
+ (BOOL)grabSWToWExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 summary:(id)a1 backExtrinsics:(id)a2;
+ (BOOL)isSuperWideStream:(id)a0;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)grabNextDepthIR;
- (id)resolvedDeviceMotionStreamName:(long long *)a0;
- (struct __CVBuffer { } *)copyNextFrameForStream:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 error:(id *)a2;
- (id)grabJasperExtrinsics;
- (id)grabNextCLLocation:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 location:(long long *)a1 timestamps:(out id *)a2;
- (id)grabNextCMData;
- (id)grabNextCMDeviceMotion:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id)grabNextCVACameraCalibrationData;
- (id)grabNextDepthTOF;
- (id)grabNextFeatureBuffer;
- (id)grabNextRawAccelData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 location:(long long *)a1;
- (id)grabNextRawCompassData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 location:(long long *)a1;
- (id)grabNextRawGyroData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 location:(long long *)a1;
- (id)grabNextUserEvent;
- (BOOL)grabSWToWExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0;
- (id)grabSummary;
- (BOOL)resetReaderTo:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 error:(id *)a1;
- (id)resolvedAccelStreamName:(long long *)a0;
- (id)resolvedGyroStreamName:(long long *)a0;
- (id)resolvedLocationStreamName:(long long *)a0;
- (id)grabNextCMData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id)grabNextDepthTOF:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 sampleDropped:(BOOL *)a1;
- (id)initWithFileURL:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)grabCalibration;
- (void)addStreamFilter:(id)a0 obj:(id)a1;
- (void)addStreamFilters:(id)a0;
- (id)applyFlip:(id)a0 f:(id)a1;
- (id)deviceStringFromPlatformID:(id)a0;
- (id)grabCalibration:(long long *)a0;
- (id)grabMovieMetadataForKey:(id)a0;
- (id)grabMovieMetadataItem:(id)a0;
- (id)grabMovieMetadataRawForKey:(id)a0;
- (id)grabNextCLLocation;
- (id)grabNextCLLocation:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id)grabNextCMDeviceMotion;
- (id)grabNextCVACameraCalibrationData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id)grabNextClass:(id)a0 class:(Class)a1;
- (id)grabNextClass:(id)a0 class:(Class)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a2;
- (id)grabNextDepthIR:(id)a0;
- (id)grabNextDepthIR:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;
- (id)grabNextDepthTOF:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id)grabNextDeviceMotionData;
- (id)grabNextDeviceMotionData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id)grabNextDeviceMotionData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 location:(long long *)a1;
- (id)grabNextDictionary:(id)a0;
- (id)grabNextDictionary:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;
- (id)grabNextFastPathMUData:(long long *)a0;
- (id)grabNextFeatureBuffer:(id)a0;
- (id)grabNextFeatureBuffer:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 streamName:(id)a1;
- (id)grabNextMotionData;
- (id)grabNextMotionData:(long long *)a0;
- (id)grabNextMotionData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 location:(long long *)a1;
- (id)grabNextNSCoderObject:(id)a0 class:(Class)a1;
- (id)grabNextNSCoderObject:(id)a0 class:(Class)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a2;
- (id)grabNextNSCoderObject:(id)a0 classes:(id)a1;
- (id)grabNextNSCoderObject:(id)a0 classes:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a2;
- (id)grabNextPRDevice;
- (id)grabNextPRDevice:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id)grabNextRawALSData:(long long *)a0;
- (id)grabNextRawALSData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 location:(long long *)a1;
- (id)grabNextRawAccelData;
- (id)grabNextRawAccelData:(long long *)a0;
- (id)grabNextRawCompassData;
- (id)grabNextRawCompassData:(long long *)a0;
- (id)grabNextRawGyroData;
- (id)grabNextRawGyroData:(long long *)a0;
- (id)grabNextRawWiFiData:(long long *)a0;
- (id)grabNextRawWiFiData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 location:(long long *)a1;
- (id)grabNextSpuIMUData:(long long *)a0;
- (id)grabNextSpuIMUData:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 location:(long long *)a1;
- (id)grabNextStreamData:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;
- (id)grabNextTimedValue;
- (id)grabNextTimedValue:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id)grabNextUserEvent:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (id)initWithFileURL:(id)a0 enforcedVideoTrackFormat:(id)a1 error:(id *)a2;
- (id)mapProductToDevice:(id)a0;
- (unsigned int)reader:(id)a0 pixelFormatForStream:(id)a1 suggestedFormat:(unsigned int)a2;
- (id)resolvedCalibration:(long long *)a0;
- (id)resolvedCompassStreamName:(long long *)a0;
- (id)resolvedMotionStreamName:(long long *)a0;
- (id)resolvedSpuIMUStreamName:(long long *)a0;

@end
