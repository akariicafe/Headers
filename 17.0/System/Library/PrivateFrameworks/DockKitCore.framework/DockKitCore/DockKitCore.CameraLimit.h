@interface DockKitCore.CameraLimit : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ camera;
    void /* unknown type, empty encoding */ minPosition;
    void /* unknown type, empty encoding */ maxPosition;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
