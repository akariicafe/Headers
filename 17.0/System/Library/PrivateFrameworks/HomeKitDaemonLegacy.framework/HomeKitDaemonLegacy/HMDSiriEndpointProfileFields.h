@class NSString;

@interface HMDSiriEndpointProfileFields : HMFObject

@property (readonly, copy) NSString *needsOnboardingField;
@property (readonly, copy) NSString *supportsOnboardingField;
@property (readonly, copy) NSString *isSiriEnableField;
@property (readonly, copy) NSString *isSiriListeningField;
@property (readonly, copy) NSString *siriTouchToUseField;
@property (readonly, copy) NSString *siriLightOnUseField;
@property (readonly, copy) NSString *siriSoundOnUseField;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)serializeFields;
- (id)initWithNeedsOnboardingField:(id)a0 supportsOnboardingField:(id)a1 siriEnableField:(id)a2 siriListeningField:(id)a3 siriTouchToUseField:(id)a4 siriLightOnUseField:(id)a5 siriSoundOnUseField:(id)a6;

@end
