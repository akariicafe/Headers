@class NSString, SBSLockScreenRemoteContentAssertion;

@interface SBLockScreenContentAssertionTestRecipe : NSObject <SBTestRecipe> {
    SBSLockScreenRemoteContentAssertion *_currentAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
