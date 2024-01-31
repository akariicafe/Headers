@class NSDictionary;

@interface MSDLocalization : NSObject

@property (retain, nonatomic) NSDictionary *localizationTable;

+ (id)sharedInstance;
+ (void)fillInMissingLocales:(id)a0 withOwnershipWarningMsg:(id)a1;
+ (BOOL)getChannelWarningKeys:(id *)a0 andPlaceHolderWarnings:(id *)a1 forDeviceClass:(id)a2;
+ (id)getLocalizedOwnershipWarnings:(id)a0;
+ (BOOL)getRetailWarningKeys:(id *)a0 andPlaceHolderWarnings:(id *)a1 forDeviceClass:(id)a2;
+ (BOOL)getWarningKeys:(id *)a0 andPlaceHolderWarnings:(id *)a1 forOwnershipWarningFlag:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)localizedStringWithKey:(id)a0 defaultString:(id)a1;

@end
