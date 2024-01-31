@class NSArray, NSString;

@interface CMContinuityCaptureDeviceCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable>

@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) NSArray *streamFormats;
@property (readonly, nonatomic) NSArray *manualFramingSupportedStreamFormats;
@property (readonly, nonatomic) NSArray *controls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_resolvedControlsForEntityType:(long long)a0;
+ (id)_resolvedStreamFormatsForEntityType:(long long)a0 requireManualFramingSupport:(BOOL)a1;
+ (BOOL)avcaptureDeviceSupportsCenterStage:(id)a0;
+ (BOOL)avcaptureDeviceSupportsFlash:(id)a0;
+ (BOOL)avcaptureDeviceSupportsPortraitEffect:(id)a0;
+ (BOOL)avcaptureDeviceSupportsReactionEffects:(id)a0;
+ (BOOL)avcaptureDeviceSupportsStudioLighting:(id)a0;
+ (id)capabilitiesForEntityType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithEntityType:(long long)a0 streamFormats:(id)a1 manualFramingSupportedStreamFormats:(id)a2 controls:(id)a3;
- (BOOL)supportsControlWithName:(id)a0;

@end
