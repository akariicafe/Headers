@interface IRAirPlaySettings : NSObject

@property (nonatomic) BOOL isAutoRoutingSettingEnabledInternal;
@property (nonatomic) BOOL isRoutePredictionSettingEnabledInternal;

+ (id)shared;

- (id)init;
- (id)dumpState;
- (BOOL)isRoutePredictionSettingEnabled;
- (BOOL)isAutoRoutingSettingEnabled;

@end
