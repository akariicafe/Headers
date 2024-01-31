@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
    long long _terminalStatus;
}

- (BOOL)_isDefunct;
- (long long)status;
- (id)initWithConfigurationState:(id)a0;
- (id)initWithConfigurationState:(id)a0 terminalStatus:(long long)a1;

@end
