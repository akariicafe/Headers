@class NSString;

@interface CRSUIMutableInstrumentClusterSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings, CRSUIMutableMapStyleProviding>

@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long showsCompass;
@property (nonatomic) unsigned long long showsSpeedLimit;
@property (nonatomic) unsigned long long showsETA;
@property (nonatomic) unsigned long long layoutJustification;
@property (readonly, nonatomic) long long mapStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMapStyle:(long long)a0;

@end
