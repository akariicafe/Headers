@class NSString;

@interface VSTrialVoice : NSObject

@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long assetSize;
@property (nonatomic) long long compatibilityVersion;

- (double)preferenceScore;
- (id)factorName;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFactorLevel:(id)a0;
- (id)initWithFactorName:(id)a0;
- (BOOL)isLocal;
- (id)initWithLanguage:(id)a0 name:(id)a1;

@end
