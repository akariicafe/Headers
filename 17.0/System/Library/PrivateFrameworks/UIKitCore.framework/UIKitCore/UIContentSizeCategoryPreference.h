@class NSString;

@interface UIContentSizeCategoryPreference : NSObject

@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSString *preferredContentSizeCategoryCarPlay;

+ (void)asyncResetSystemPreferenceOverride;
+ (void)asyncOverrideSystemWithPreference:(id)a0;
+ (void)overrideSystemWithPreference:(id)a0;
+ (void)resetSystemPreferenceOverride;
+ (void)overrideSystemWithPreference:(id)a0 forBlock:(id /* block */)a1;
+ (void)_resetSystemPreferenceOverride;
+ (id)system;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0;
+ (void)_populateUserDefaultsContentSizeCategory:(out id *)a0 carPlay:(out id *)a1;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0 forBlock:(id /* block */)a1;

- (id)init;
- (unsigned long long)hash;
- (void)checkForChanges;
- (id)initWithContentSizeCategory:(id)a0 carPlay:(id)a1;
- (id)initWithRawUserDefaults;
- (id)initWithContentSizeCategory:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
