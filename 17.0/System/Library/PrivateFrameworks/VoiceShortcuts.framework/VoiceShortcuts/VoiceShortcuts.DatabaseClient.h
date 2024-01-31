@interface VoiceShortcuts.DatabaseClient : _TtCs12_SwiftObject <WFDatabaseObjectObserver> {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ operations;
    void /* unknown type, empty encoding */ _entitiesStream;
    void /* unknown type, empty encoding */ _deletionsStream;
}

- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;

@end
