@interface VCCapabilities : NSObject <NSCoding>

@property BOOL isAudioEnabled;
@property BOOL isAudioPausedToStart;
@property BOOL isVideoEnabled;
@property BOOL isVideoPausedToStart;
@property BOOL isVideoSourceScreen;
@property BOOL isDuplexVideoOnly;
@property BOOL isDuplexAudioOnly;
@property BOOL isHalfDuplexAudio;
@property BOOL isKeyExchangeEnabled;
@property BOOL isRelayEnabled;
@property BOOL isRelayForced;
@property BOOL requiresWifi;
@property BOOL isDTLSEnabled;
@property unsigned int preferredAudioCodec;
@property unsigned int actualAudioCodec;
@property unsigned int preferredVideoCodec;
@property unsigned int actualVideoCodec;
@property int deviceRole;

+ (id)DataOnlyVCCapabilities;
+ (id)AudioOnlyVCCapabilities;
+ (id)VideoOnlyVCCapabilities;
+ (id)screenSharingVCCapabilities;

- (id)init;
- (id)initWithEncodedDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)decodeFromNSDictionary:(id)a0;
- (id)newEncodedDictionary;

@end
