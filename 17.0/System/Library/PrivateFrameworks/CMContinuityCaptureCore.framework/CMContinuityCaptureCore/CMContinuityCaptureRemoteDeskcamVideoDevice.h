@interface CMContinuityCaptureRemoteDeskcamVideoDevice : CMContinuityCaptureRemoteVideoDevice

- (BOOL)_companionConnectionsRequired;
- (void)_forcefullyEnableCenterStageOnSuperWide;
- (void)_restoreStatesAfterForcefulCenterStageEnablementAndShouldReconfigureCaptureStack:(BOOL)a0;
- (BOOL)_shouldOnlyDisableVideoConnection;
- (BOOL)configureConnections;
- (id)connectionsForConfiguration:(id)a0;
- (BOOL)isStreamingOnSuperWide;

@end
