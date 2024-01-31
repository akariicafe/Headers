@class NSString, NSMutableDictionary;

@interface SBPIPAnalytics : NSObject <PGPictureInPictureAnalyticsDelegate> {
    NSMutableDictionary *_analyticsSourceAssistants;
    NSMutableDictionary *_analyticsSessionAssistants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pictureInPictureDidActivateAnalyticsSessionWithUUID:(id)a0 analyticsSourceUUID:(id)a1 automatically:(BOOL)a2;
- (void)pictureInPictureDidChangeStashStateForAnalyticsSessionWithUUID:(id)a0 stashed:(BOOL)a1;
- (void)pictureInPictureDidCreateAnalyticsSessionWithUUID:(id)a0 bundleIdentifier:(id)a1 contentType:(long long)a2;
- (void)pictureInPictureDidCreateAnalyticsSourceWithUUID:(id)a0 bundleIdentifier:(id)a1 contentType:(long long)a2;
- (void)pictureInPictureDidDeactivateAnalyticsSessionWithUUID:(id)a0 analyticsSourceUUID:(id)a1 appStoppedSession:(BOOL)a2 restoredFullScreen:(BOOL)a3;
- (void)pictureInPictureDidDestroyAnalyticsSessionWithUUID:(id)a0;
- (void)pictureInPictureDidDestroyAnalyticsSourceWithUUID:(id)a0;
- (id)assistantForUUID:(id)a0;
- (void)pictureInPictureAnalyticsSourceWithUUID:(id)a0 didBecomePossible:(BOOL)a1;

@end
