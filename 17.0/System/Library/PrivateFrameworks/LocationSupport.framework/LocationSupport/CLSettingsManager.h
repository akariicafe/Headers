@class NSString;

@interface CLSettingsManager : CLSettingsManagerInternal <CLSettingsManagerProtocol>

@property (retain, nonatomic) id notificationObserver;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)refresh;
- (void)beginService;
- (void)endService;
- (id)syncgetSetValue:(id)a0 forKey:(id)a1 withoutNotifying:(byref id)a2;

@end
