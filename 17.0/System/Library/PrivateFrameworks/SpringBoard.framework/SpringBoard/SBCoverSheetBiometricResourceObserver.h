@class NSString;
@protocol SBUIBiometricResource, SBPearlMatchingStateProviderDelegate;

@interface SBCoverSheetBiometricResourceObserver : NSObject <SBUIBiometricResourceObserver, SBPearlMatchingStateProvider>

@property (nonatomic) BOOL seenMatchResultSinceScreenOn;
@property (weak, nonatomic) id<SBUIBiometricResource> biometricResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBPearlMatchingStateProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL pearlMatchEnabledAndPossible;

@end
