@class NSString;

@interface BKSMousePointerDevicePreferences : NSObject <NSSecureCoding, BSProtobufSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float pointerAccelerationFactor;
@property (nonatomic) float scrollAccelerationFactor;
@property (nonatomic) BOOL enableNaturalScrolling;
@property (nonatomic) BOOL enableTapToClick;
@property (nonatomic) BOOL enableTwoFingerSecondaryClick;
@property (nonatomic) long long doubleTapDragMode;
@property (nonatomic) long long buttonConfigurationForHardwareButtonMice;
@property (nonatomic) long long buttonConfigurationForVirtualButtonMice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)defaultPreferencesForHardwareType:(long long)a0;

- (id)init;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:(id)a0;
- (void)_fixMissingButtonConfigurations;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
