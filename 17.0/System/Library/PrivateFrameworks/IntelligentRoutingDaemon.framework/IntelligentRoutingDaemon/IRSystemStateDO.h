@class NSString;

@interface IRSystemStateDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appInFocusBundleID;
@property (readonly, nonatomic) BOOL appInFocusWindowValid;
@property (readonly, nonatomic) NSString *deviceWiFiSSID;
@property (readonly, nonatomic) int locationSemanticUserSpecificPlaceType;
@property (readonly, nonatomic) NSString *locationSemanticLoiIdentifier;
@property (readonly, nonatomic) NSString *iCloudId;
@property (readonly, nonatomic) NSString *avInitialRouteSharingPolicy;
@property (readonly, nonatomic) NSString *mediaRouteGroupLeaderOutputDeviceID;
@property (readonly, nonatomic) long long timeZoneSeconds;
@property (readonly, nonatomic) NSString *outputDeviceName;
@property (readonly, nonatomic) unsigned long long outputDeviceType;
@property (readonly, nonatomic) unsigned long long outputDeviceSubType;
@property (readonly, nonatomic) NSString *predictedOutputDeviceName;
@property (readonly, nonatomic) unsigned long long predictedOutputDeviceType;
@property (readonly, nonatomic) unsigned long long predictedOutputDeviceSubType;
@property (readonly, nonatomic) BOOL appInFocusWindowScreenUnlockEvent;

+ (id)systemStateDOWithAppInFocusBundleID:(id)a0 appInFocusWindowValid:(BOOL)a1 deviceWiFiSSID:(id)a2 locationSemanticUserSpecificPlaceType:(int)a3 locationSemanticLoiIdentifier:(id)a4 iCloudId:(id)a5 avInitialRouteSharingPolicy:(id)a6 mediaRouteGroupLeaderOutputDeviceID:(id)a7 timeZoneSeconds:(long long)a8 outputDeviceName:(id)a9 outputDeviceType:(unsigned long long)a10 outputDeviceSubType:(unsigned long long)a11 predictedOutputDeviceName:(id)a12 predictedOutputDeviceType:(unsigned long long)a13 predictedOutputDeviceSubType:(unsigned long long)a14 appInFocusWindowScreenUnlockEvent:(BOOL)a15;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementAppInFocusBundleID:(id)a0;
- (id)copyWithReplacementAppInFocusWindowScreenUnlockEvent:(BOOL)a0;
- (id)copyWithReplacementAppInFocusWindowValid:(BOOL)a0;
- (id)copyWithReplacementAvInitialRouteSharingPolicy:(id)a0;
- (id)copyWithReplacementDeviceWiFiSSID:(id)a0;
- (id)copyWithReplacementICloudId:(id)a0;
- (id)copyWithReplacementLocationSemanticLoiIdentifier:(id)a0;
- (id)copyWithReplacementLocationSemanticUserSpecificPlaceType:(int)a0;
- (id)copyWithReplacementMediaRouteGroupLeaderOutputDeviceID:(id)a0;
- (id)copyWithReplacementOutputDeviceName:(id)a0;
- (id)copyWithReplacementOutputDeviceSubType:(unsigned long long)a0;
- (id)copyWithReplacementOutputDeviceType:(unsigned long long)a0;
- (id)copyWithReplacementPredictedOutputDeviceName:(id)a0;
- (id)copyWithReplacementPredictedOutputDeviceSubType:(unsigned long long)a0;
- (id)copyWithReplacementPredictedOutputDeviceType:(unsigned long long)a0;
- (id)copyWithReplacementTimeZoneSeconds:(long long)a0;
- (id)exportAsDictionary;
- (id)initWithAppInFocusBundleID:(id)a0 appInFocusWindowValid:(BOOL)a1 deviceWiFiSSID:(id)a2 locationSemanticUserSpecificPlaceType:(int)a3 locationSemanticLoiIdentifier:(id)a4 iCloudId:(id)a5 avInitialRouteSharingPolicy:(id)a6 mediaRouteGroupLeaderOutputDeviceID:(id)a7 timeZoneSeconds:(long long)a8 outputDeviceName:(id)a9 outputDeviceType:(unsigned long long)a10 outputDeviceSubType:(unsigned long long)a11 predictedOutputDeviceName:(id)a12 predictedOutputDeviceType:(unsigned long long)a13 predictedOutputDeviceSubType:(unsigned long long)a14 appInFocusWindowScreenUnlockEvent:(BOOL)a15;
- (BOOL)isEqualToSystemStateDO:(id)a0;
- (BOOL)isHeadphonesRoutedOrPredicted;
- (BOOL)isInsideAppInFocusWindow;

@end
