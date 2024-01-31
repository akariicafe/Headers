@class HMCameraUserNotificationSettings, NSUUID, NSSet, NSString, NSArray;

@interface _HMCameraUserSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *UUID;
@property unsigned long long supportedFeatures;
@property unsigned long long accessModeAtHome;
@property unsigned long long accessModeNotAtHome;
@property unsigned long long currentAccessMode;
@property unsigned long long recordingEventTriggers;
@property (getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;
@property (copy) HMCameraUserNotificationSettings *notificationSettings;
@property (copy) NSSet *activityZones;
@property (getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
