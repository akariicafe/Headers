@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (id)copyPropertyForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (void)registerNotificationBlock:(id /* block */)a0;
- (BOOL)isAlsSupported;

@end
