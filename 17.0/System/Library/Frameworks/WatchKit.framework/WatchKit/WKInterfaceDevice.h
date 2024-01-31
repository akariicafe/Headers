@class NSString, NSDictionary;

@interface WKInterfaceDevice : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenBounds;
@property (nonatomic) double screenScale;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSString *deviceSystemVersion;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceLocalizedModel;
@property (copy, nonatomic) NSString *deviceSystemName;
@property (readonly, nonatomic) NSDictionary *cachedImages;
@property (nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;
@property (readonly, nonatomic) float batteryLevel;
@property (readonly, nonatomic) long long batteryState;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) long long wristLocation;
@property (readonly, nonatomic) long long crownOrientation;
@property (readonly, copy, nonatomic) NSString *systemVersion;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *localizedModel;
@property (readonly, copy, nonatomic) NSString *systemName;

+ (id)currentDevice;

- (void).cxx_destruct;
- (BOOL)addCachedImage:(id)a0 name:(id)a1;
- (BOOL)addCachedImageWithData:(id)a0 name:(id)a1;
- (void)playHaptic:(long long)a0;
- (void)removeAllCachedImages;
- (void)removeCachedImageWithName:(id)a0;

@end
