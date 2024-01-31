@class NSString, CLFBaseSettings;

@interface _CLFSettingsObserver : NSObject <BSInvalidatable>

@property (weak, nonatomic) CLFBaseSettings *settings;
@property (nonatomic) SEL settingsSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0 settingsSelector:(SEL)a1;

@end
