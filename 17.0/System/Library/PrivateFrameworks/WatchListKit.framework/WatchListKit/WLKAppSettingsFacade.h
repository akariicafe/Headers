@class WLKAppSettings;

@interface WLKAppSettingsFacade : NSObject {
    WLKAppSettings *_settings;
}

- (id)settings;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)accessStatus;
- (void)setAccessStatus:(id)a0;

@end
