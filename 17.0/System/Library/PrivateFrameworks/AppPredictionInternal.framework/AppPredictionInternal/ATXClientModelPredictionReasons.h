@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)localizedStringForKey:(id)a0;
- (id)init;
- (id)actionAnchorReasonForAnchorType:(id)a0;
- (id)appInstalledAppClipReason;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;
- (id)appLocationBasedAppClipReason;
- (id)appAnchorReasonForAnchorType:(id)a0;
- (id)appMagicalMomentReasonForAnchorType:(long long)a0;
- (id)appBehavioralReason;
- (void).cxx_destruct;
- (id)appHeroAppReason;
- (id)actionBehavioralReason;

@end
