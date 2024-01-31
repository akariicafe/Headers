@class NSURL;

@interface APPCVideoRepresentation : APPCContentRepresentation <APPCPromotableVideoRepresentation> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoURL;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ originalVideoURL;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ fileSize;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ skipThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ skipEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ unbranded;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ bitrate;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ signalStrength;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ connectionType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ videoSize;
@property (nonatomic, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 adType:(long long)a1 desiredPosition:(long long)a2 videoURL:(id)a3 duration:(double)a4 fileSize:(long long)a5 skipThreshold:(double)a6 skipEnabled:(BOOL)a7 unbranded:(BOOL)a8 bitrate:(double)a9 connectionType:(long long)a10 signalStrength:(unsigned long long)a11 videoSize:(struct { double x0; double x1; })a12 tapAction:(id)a13 adPolicyData:(id)a14;

@end
