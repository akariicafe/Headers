@class HMUser, NSArray, NSSet, HFActionNaturalLanguageOptions, HMHome;

@interface HFTriggerNaturalLanguageOptions : HFNaturalLanguageOptions

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) unsigned long long nameType;
@property (nonatomic) BOOL shouldUseFullDayNames;
@property (nonatomic) BOOL shouldUseFirstPersonPronounIfPossible;
@property (nonatomic) long long formattingStyle;
@property (weak, nonatomic) HMUser *locationEventUser;
@property (retain, nonatomic) HFActionNaturalLanguageOptions *actionNaturalLanguageOptions;
@property (retain, nonatomic) NSSet *objectsInContext;

+ (id)optionsWithHome:(id)a0 nameType:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0 nameType:(unsigned long long)a1 actions:(id)a2;
- (void)_copyFromOptions:(id)a0;
- (id)initWithHome:(id)a0 nameType:(unsigned long long)a1;

@end
