@interface DockKitCore.CameraSessionInformation : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ endTime;
    void /* unknown type, empty encoding */ cameraType;
    void /* unknown type, empty encoding */ azimuth;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
