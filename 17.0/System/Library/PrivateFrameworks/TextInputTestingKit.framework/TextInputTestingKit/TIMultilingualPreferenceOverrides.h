@class NSArray, NSString, TIInputMode;

@interface TIMultilingualPreferenceOverrides : NSObject <TIMultilingualPreferenceProviding>

@property (readonly, nonatomic) TIInputMode *preferredSecondaryInputMode;
@property (readonly, nonatomic) NSArray *userEnabledInputModes;
@property (readonly, nonatomic) NSArray *userPreferredLanguages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPreferredSecondaryInputMode:(id)a0 userEnabledInputModes:(id)a1 userPreferredLanguages:(id)a2;

@end
