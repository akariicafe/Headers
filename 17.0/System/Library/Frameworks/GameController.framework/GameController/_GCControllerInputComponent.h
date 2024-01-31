@class NSString, NSArray, GCSProfile;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCControllerInputComponent : _GCDevicePhysicalInputComponent <GCControllerComponent> {
    NSArray *_templateElementParameters;
    GCSProfile *_appliedSettingsProfile;
    NSArray *_eventRemappingActions;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
