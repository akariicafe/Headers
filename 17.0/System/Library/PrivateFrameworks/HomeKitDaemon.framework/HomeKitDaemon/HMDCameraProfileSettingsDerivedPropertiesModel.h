@class NSNumber, NSDate;

@interface HMDCameraProfileSettingsDerivedPropertiesModel : HMBModel

@property (retain) NSNumber *currentAccessModeField;
@property (retain) NSNumber *currentAccessModeChangeReasonField;
@property unsigned long long currentAccessMode;
@property long long currentAccessModeChangeReason;
@property (retain) NSDate *currentAccessModeChangeDate;

+ (id)hmbProperties;

@end
