@class NSArray, SXComponentTextRules, SXComponentLayoutRules;

@interface SXComponentClassification : NSObject

@property (readonly, nonatomic) NSArray *defaultStyleIdentifiers;
@property (readonly, nonatomic) SXComponentLayoutRules *layoutRules;
@property (readonly, nonatomic) SXComponentTextRules *textRules;
@property (readonly, nonatomic) NSArray *defaultTextStyleIdentifiers;
@property (readonly, nonatomic) NSArray *defaultComponentStyleIdentifiers;
@property (readonly, nonatomic) unsigned long long contentRelevance;

+ (id)roleString;
+ (int)role;
+ (void)initialize;
+ (id)typeString;
+ (BOOL)shouldRegister;
+ (id)classificationForComponentWithRole:(int)a0;
+ (id)classificationForComponentWithType:(id)a0;
+ (id)classificationForComponentWithType:(id)a0 role:(id)a1;
+ (void)registerClassification;

- (id)init;
- (id)accessibilityContextualLabel;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)accessibilityCustomRotorMembership;
- (Class)componentModelClass;
- (void).cxx_destruct;
- (BOOL)accessibilitySkippedDuringReadAll;
- (BOOL)isCollapsible;
- (void)setupStyleIdentifiers;

@end
