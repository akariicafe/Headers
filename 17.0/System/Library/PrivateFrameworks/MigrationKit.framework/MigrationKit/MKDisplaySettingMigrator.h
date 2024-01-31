@interface MKDisplaySettingMigrator : MKMigrator

- (id)init;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)import:(id)a0;
- (void)importDataEncodedInJSON:(id)a0;

@end
