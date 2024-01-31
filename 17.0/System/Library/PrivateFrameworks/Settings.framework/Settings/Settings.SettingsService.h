@interface Settings.SettingsService : _TtCs12_SwiftObject <Settings.SettingsServiceProtocol> {
    void /* unknown type, empty encoding */ extension;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _connection;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ serviceHost;

- (void)openURL:(id)a0;
- (void)isAvailable:(id /* block */)a0;
- (void)filterSearchAnchorsForSidebarItem:(id)a0 suggestedAnchors:(id)a1 reply:(id /* block */)a2;
- (void)getSidebarItems:(id /* block */)a0;
- (void)getSidebarSections:(id /* block */)a0;

@end
