@protocol _TtP8Settings20SettingsHostProtocol_;

@interface _TtC8SettingsP33_D536CAB592FD6D1F6F74399A1DC2AD1D24SettingsProtocolDispatch : _TtCs12_SwiftObject <Settings.SettingsPrivateProtocol> {
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ initialPathToken;
    void /* unknown type, empty encoding */ hasPushedContent;
}

@property (nonatomic, retain) id<_TtP8Settings20SettingsHostProtocol_> settingsHost;

- (void)setCloudSyncEnabled:(BOOL)a0;
- (void)isCloudSyncEnabled:(id /* block */)a0;
- (void)willSelectWithRevealElementKey:(id)a0;
- (void)didUnselect;
- (void)handshakeWithEndPoint:(id)a0;
- (void)popNavigationStack;
- (void)willSelect;
- (void)willSelectWithNavigationPath:(id)a0;

@end
