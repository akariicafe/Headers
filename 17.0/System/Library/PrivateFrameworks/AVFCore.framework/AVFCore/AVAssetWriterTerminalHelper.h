@interface AVAssetWriterTerminalHelper : AVAssetWriterHelper

- (BOOL)_isDefunct;
- (id)initWithConfigurationState:(id)a0;
- (void)transitionToFailedStatusWithError:(id)a0;

@end
