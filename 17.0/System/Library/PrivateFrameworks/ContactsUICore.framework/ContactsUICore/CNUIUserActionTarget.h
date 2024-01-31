@class NSString;
@protocol CNTUCallProvider;

@interface CNUIUserActionTarget : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) NSString *actionType;
@property (retain) id<CNTUCallProvider> callProvider;

+ (id)targetForDirections;
+ (id)targetForTextWithMessages;
+ (id)targetForVoiceWithCallProvider:(id)a0;
+ (id)targetForVideoWithCallProvider:(id)a0;
+ (id)descriptorForRequiredKeysForActionDiscovering;
+ (id)targetForEmailWithMail;
+ (id)targetForPayWithWallet;
+ (id)targetForSendMessageIntentWithAppProxy:(id)a0;
+ (id)targetForStartAudioCallIntentWithAppProxy:(id)a0;
+ (id)targetForStartVideoCallIntentWithAppProxy:(id)a0;
+ (id)targetForTextWithSkype;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForVideoWithSkype;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVoiceWithTelephony;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)actionsForContact:(id)a0 discoveringEnvironment:(id)a1;
- (id)actionsForEmailAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForInstantMessageAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForPhoneNumbers:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForPostalAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForSocialProfiles:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)initWithName:(id)a0 bundleIdentifier:(id)a1 teamIdentifier:(id)a2;

@end
