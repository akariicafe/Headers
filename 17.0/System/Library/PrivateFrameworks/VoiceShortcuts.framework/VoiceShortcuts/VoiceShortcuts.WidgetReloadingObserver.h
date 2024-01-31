@interface VoiceShortcuts.WidgetReloadingObserver : _TtCs12_SwiftObject <WFDatabaseObjectObserver> {
    void /* unknown type, empty encoding */ debouncer;
    void /* unknown type, empty encoding */ database;
}

- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)reloadTimelines;
- (void)databaseResultDidChange:(id)a0;

@end
