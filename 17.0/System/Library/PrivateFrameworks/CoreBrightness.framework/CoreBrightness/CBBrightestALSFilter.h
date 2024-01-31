@class NSMutableDictionary;

@interface CBBrightestALSFilter : CBFilter {
    NSMutableDictionary *_alsEvents;
}

- (id)init;
- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)filterEvent:(id)a0;
- (void)forgetDataForService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)displayBrightnessFactorPropertyHandler:(id)a0;

@end
