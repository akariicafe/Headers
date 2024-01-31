@class IKAppContext, NSMutableDictionary;
@protocol IKAppDeviceConfig;

@interface IKJSFoundation : NSObject

@property (weak, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) NSMutableDictionary *jsTimers;
@property (retain, nonatomic) NSMutableDictionary *dateFormatterCache;
@property (weak, nonatomic) id<IKAppDeviceConfig> deviceConfig;

- (void).cxx_destruct;
- (void)stopTimers;
- (void)_clearTimer:(id)a0;
- (void)_jsTimerFired:(id)a0;
- (id)_startTimer:(id)a0 time:(long long)a1 repeating:(BOOL)a2;
- (id)_stringForKey:(id)a0 fromDict:(id)a1;
- (void)clearCookies;
- (void)clearInterval:(id)a0;
- (void)clearTimeout:(id)a0;
- (id)getCookieForURL:(id)a0 useSSCookieStorage:(BOOL)a1;
- (id)initWithAppContext:(id)a0 deviceConfig:(id)a1;
- (void)setCookie:(id)a0 useSSCookieStorage:(BOOL)a1;
- (id)setInterval:(id)a0 time:(long long)a1;
- (id)setTimeout:(id)a0 time:(long long)a1;

@end
