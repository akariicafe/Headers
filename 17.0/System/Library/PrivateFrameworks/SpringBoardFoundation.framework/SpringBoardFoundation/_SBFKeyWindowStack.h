@class NSString, SBFWindow, NSMutableOrderedSet;

@interface _SBFKeyWindowStack : NSObject <BSDescriptionProviding> {
    SBFWindow *_expectedKeyWindow;
    NSMutableOrderedSet *_windowStack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)expectedKeyWindow;
- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)noteWindowDeallocated:(id)a0;
- (BOOL)_isWindowEligibleForKeyness:(id)a0;
- (id)_evaluateForNewKeyWindowWithReason:(id)a0;
- (void)popKeyWindow:(id)a0 reason:(id)a1;
- (void)noteWindowHidden:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (BOOL)pushKeyWindow:(id)a0;
- (void)_keyWindowDidChangeNotification:(id)a0;
- (id)succinctDescription;
- (void)noteWindowUnhidden:(id)a0;
- (void)popKeyWindow:(id)a0;

@end
