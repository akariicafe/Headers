@interface UIWindowSceneGeometryPreferencesIOS : UIWindowSceneGeometryPreferences

@property (nonatomic) unsigned long long interfaceOrientations;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)_type;
- (id)initWithInterfaceOrientations:(unsigned long long)a0;

@end
