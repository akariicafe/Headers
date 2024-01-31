@class NSString;

@interface SBSALayoutModeLayoutProvider : SBSABasePreferencesProvider <SBSAElementLayoutModeSupporting> {
    BOOL _performedInitialLayoutIfNecessary;
}

@property (readonly, nonatomic) long long supportedElementLayoutMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
