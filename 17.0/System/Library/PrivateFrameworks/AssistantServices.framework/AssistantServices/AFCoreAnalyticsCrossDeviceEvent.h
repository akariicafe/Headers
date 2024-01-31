@class NSString, NSMutableDictionary;

@interface AFCoreAnalyticsCrossDeviceEvent : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *nearbyDevicesLoggingID;
@property (retain, nonatomic) NSMutableDictionary *nearbyDevicesPayloads;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNearbyDevicesLoggingID:(id)a0;
- (void)_setTargetedDeviceContextIdentifier:(id)a0 withAction:(id)a1 payload:(id)a2;
- (void)addCoreAnalyticsDeviceTargetedWithContextIdentifier:(id)a0 commandResultDescription:(id)a1;
- (void)addNearbyDeviceContexts:(id)a0 proximityInfo:(id)a1;

@end
