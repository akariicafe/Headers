@class NSString, CLIntersiloUniverse;
@protocol CLSettingsManagerProtocol;

@interface CLSettingsMirror : CLSettingsDictionary <CLSettingsManagerClientProtocol>

@property (retain, nonatomic) id<CLSettingsManagerProtocol> manager;
@property (retain, nonatomic) CLIntersiloUniverse *universe;
@property (copy, nonatomic) id /* block */ settingsChangeHandler;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setString:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)invalidate;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setShort:(short)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setInt:(int)a0 forKey:(id)a1;
- (id)initInUniverse:(id)a0;
- (void)didUpdateSettings:(id)a0;
- (void)setLong:(long long)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;

@end
