@interface PBUIWallpaperUpdateLocationsAction : BSAction

@property (readonly, nonatomic) long long locations;
@property (readonly, nonatomic) long long wallpaperMode;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)initWithLocations:(long long)a0 wallpaperMode:(long long)a1 responder:(id)a2;

@end
