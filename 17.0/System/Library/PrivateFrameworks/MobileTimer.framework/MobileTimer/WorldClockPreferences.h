@interface WorldClockPreferences : NSObject

- (id)lastModified;
- (id)defaultsKeys;
- (void)setLastModified:(id)a0;
- (void)setDefaultCitiesAdded:(BOOL)a0;
- (void)cityDataUpdated;
- (id)cities;
- (void)setCities:(id)a0;
- (BOOL)cityDataNeedsUpdate;
- (BOOL)synchronize;
- (BOOL)defaultCitiesAdded;
- (void)clearOutCityUpdatePref;

@end
