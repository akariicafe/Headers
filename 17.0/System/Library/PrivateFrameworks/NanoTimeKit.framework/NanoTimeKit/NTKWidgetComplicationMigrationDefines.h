@interface NTKWidgetComplicationMigrationDefines : NSObject

+ (id)_complicationTypeToWidgetMigrations;
+ (BOOL)hasMigratedComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (id)migrateComplication:(id)a0 forFamily:(long long)a1;

@end
