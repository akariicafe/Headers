@interface SUScriptMusicPlayerNativeObject : SUScriptNativeObject

- (void)_nowPlayingChangeNotification:(id)a0;
- (void)_playbackStateChangeNotification:(id)a0;
- (void)_volumeChangeNotification:(id)a0;
- (void)destroyNativeObject;
- (void)setupNativeObject;

@end
