@class NSString;

@interface _TIPreference : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *fallbackKey;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) id currentValue;
@property (nonatomic) BOOL isAnalyzed;
@property (nonatomic) BOOL isCloudSetting;
@property (nonatomic) BOOL isWatchSync;
@property (readonly, nonatomic) NSString *previousValueKey;
@property (readonly, nonatomic) NSString *changedAtKey;
@property (readonly, nonatomic) NSString *analyzedAtKey;
@property (readonly, nonatomic) NSString *buildAtChangeKey;
@property (readonly, nonatomic) NSString *approxDateOfBuildInstallKey;
@property (readonly, nonatomic) NSString *buildAtLastAnalysisKey;

+ (id)preferenceWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 fallbackKey:(id)a3 isAnalyzed:(BOOL)a4;
+ (id)preferenceWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2;
+ (id)preferenceWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 fallbackKey:(id)a3;

- (id)approxDateOfBuildInstall;
- (void).cxx_destruct;
- (id)buildAtLastAnalysis;

@end
