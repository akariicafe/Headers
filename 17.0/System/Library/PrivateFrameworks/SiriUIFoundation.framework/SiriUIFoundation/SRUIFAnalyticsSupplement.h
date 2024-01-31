@class NSString, NSArray, NSMutableDictionary;

@interface SRUIFAnalyticsSupplement : NSObject {
    NSString *_lastComputedRefId;
    int _lastComputedMode;
    NSArray *_generatedAceCommands;
    NSMutableDictionary *_aceObjectDialogPhaseDictionary;
}

- (void).cxx_destruct;
- (int)computedModeForAceCommand:(id)a0;
- (int)computedModeForRefId:(id)a0;
- (id)dialogPhaseForAceObject:(id)a0;
- (void)didComputeMode:(int)a0 forAceCommand:(id)a1 generatedAceCommands:(id)a2;
- (void)storeDialogPhasesForItemsAtIndexPaths:(id)a0 forConversation:(id)a1;

@end
