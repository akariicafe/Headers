@class NSString, FBSDisplayIdentity, NSMapTable;
@protocol _SBDisplayAssertionStackDelegate;

@interface _SBDisplayAssertionStack : NSObject <SBDisplayAssertionProviding> {
    FBSDisplayIdentity *_rootIdentity;
    id<_SBDisplayAssertionStackDelegate> _delegate;
    BOOL _invalidated;
    BOOL _activated;
    NSMapTable *_assertionControlPreferences;
}

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_assertion:(id)a0 updatedPreferences:(id)a1;
- (void)_assertionDidInvalidate:(id)a0;
- (void)_evalAndApplyOldPreferences:(id)a0 newPreferences:(id)a1;
- (id)acquireAssertionForDisplay:(id)a0 level:(unsigned long long)a1 deactivationReasons:(unsigned long long)a2 delegate:(id)a3;
- (void)activateAssertionsForDisplay:(id)a0;
- (id)initWithRootDisplay:(id)a0 delegate:(id)a1;
- (void)invalidateAssertionForDerivedDisplayDisconnect:(id)a0;
- (void)invalidateForDisplayDisconnect;

@end
