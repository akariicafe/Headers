@class _PASLock;

@interface SGReminderTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateFactors;
- (BOOL)triggerOptional;
- (BOOL)actionVerbOptional;
- (id)baseModelName;
- (BOOL)confirmationOptional;
- (id)messagesBannerLimit;
- (id)reminderEnrichments;
- (id)reminderInputMapping;
- (id)reminderOutputMapping;
- (id)reminderOverrides;

@end
