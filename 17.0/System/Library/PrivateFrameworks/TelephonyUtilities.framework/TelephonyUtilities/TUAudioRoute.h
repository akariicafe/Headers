@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (BOOL)isReceiver;
- (BOOL)supportsSharePlay;
- (BOOL)isPreferred;
- (BOOL)isWirelessHeadset;
- (BOOL)isCurrentlyPicked;
- (BOOL)isHandset;
- (BOOL)isCarAudio;
- (BOOL)isSpeaker;
- (BOOL)isInEarDetectionSupported;
- (BOOL)isPartnerRouteRoutable;
- (BOOL)isA2DPRoute;
- (BOOL)isInEarDetectionEnabled;
- (BOOL)isDefaultRoute;
- (BOOL)isBluetoothManaged;
- (BOOL)isBluetoothLE;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (BOOL)isSiblingRoutePresent;
- (BOOL)isPreferredAndActive;
- (BOOL)isWiredHeadphones;
- (id)initWithDictionary:(id)a0;
- (BOOL)isWiredHeadset;
- (id)customDescription;
- (void).cxx_destruct;
- (id)identifiersOfOtherConnectedDevices;
- (BOOL)isAirTunes;
- (long long)bluetoothEndpointType;
- (long long)deviceType;
- (id)initWithCoder:(id)a0;
- (BOOL)isBluetooth;

@end
