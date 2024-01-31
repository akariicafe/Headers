@class NSString, TSPDigest;

@interface TSDMovieFingerprintTrack : TSKSosBase <NSCopying> {
    long long _totalSampleDataLength;
    NSString *_sampleDataDigestString;
    long long _timeRangeStartValue;
    int _timeRangeStartTimescale;
    BOOL _timeRangeStartIsValid;
    long long _timeRangeDurationValue;
    int _timeRangeDurationTimescale;
    BOOL _timeRangeDurationIsValid;
    double _preferredTransformA;
    double _preferredTransformB;
    double _preferredTransformC;
    double _preferredTransformD;
    double _preferredTransformTx;
    double _preferredTransformTy;
    double _preferredVolume;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    BOOL _definedLanguageCode;
    BOOL _definedExtendedLanguageTag;
}

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long totalSampleDataLength;
@property (readonly, nonatomic) TSPDigest *sampleDataDigest;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (readonly, nonatomic) float preferredVolume;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initFromMessage:(const void *)a0 unarchiver:(id)a1;
- (id)initWithMediaType:(id)a0 enabled:(BOOL)a1 totalSampleDataLength:(long long)a2 sampleDataDigest:(id)a3 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 languageCode:(id)a5 extendedLanguageTag:(id)a6 naturalSize:(struct CGSize { double x0; double x1; })a7 preferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a8 preferredVolume:(float)a9;

@end
