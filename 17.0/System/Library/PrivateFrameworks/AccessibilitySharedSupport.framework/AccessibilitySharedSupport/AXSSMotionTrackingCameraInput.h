@class NSString;

@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *captureDeviceUniqueID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isBuiltIn;

+ (BOOL)supportsSecureCoding;
+ (id)captureDeviceForMotionTrackingInput:(id)a0;
+ (id)motionTrackingCameraInputWithAVCaptureDevice:(id)a0;

- (id)plistDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPlistDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isCamera;
- (id)initWithCaptureDeviceUniqueID:(id)a0 name:(id)a1 isBuiltIn:(BOOL)a2;
- (BOOL)supportsExpressions;
- (unsigned long long)trackingType;

@end
