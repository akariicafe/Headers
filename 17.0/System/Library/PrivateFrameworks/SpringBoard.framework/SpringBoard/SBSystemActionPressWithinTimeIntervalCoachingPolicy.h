@class NSCountedSet, NSString, NSMapTable, SBSystemActionPressWithinTimeIntervalCoachingPolicySettings, NSTimer;

@interface SBSystemActionPressWithinTimeIntervalCoachingPolicy : NSObject <SBSystemActionCoachingPolicy> {
    SBSystemActionPressWithinTimeIntervalCoachingPolicySettings *_settings;
    NSCountedSet *_countedActions;
    NSMapTable *_latestPreviewsByAction;
    NSTimer *_resetTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)noteDidBeginPreview:(id)a0 forAction:(id)a1;
- (void)noteDidEndPreview:(id)a0 forAction:(id)a1;
- (void)noteDidInvalidateExpansionOfPreview:(id)a0 forAction:(id)a1 withResult:(unsigned long long)a2;
- (BOOL)wantsCoachingDismissedForAction:(id)a0;
- (BOOL)wantsCoachingPresentedForAction:(id)a0;

@end
