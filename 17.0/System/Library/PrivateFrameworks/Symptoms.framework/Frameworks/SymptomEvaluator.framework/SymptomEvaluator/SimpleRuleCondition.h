@class NSString, NSMutableDictionary;
@protocol SymptomAdditionalProtocol;

@interface SimpleRuleCondition : NSObject <ConfigurableObjectProtocol> {
    NSMutableDictionary *_resetSources;
}

@property (retain, nonatomic) NSString *conditionName;
@property (nonatomic) long long conditionMinCount;
@property (nonatomic) int conditionType;
@property (retain, nonatomic) NSString *conditionPrevSymptom;
@property (nonatomic) long long conditionMaxAge;
@property (nonatomic) long long conditionFlags;
@property (retain, nonatomic) NSString *conditionStringID;
@property (nonatomic) long long conditionStringLength;
@property (retain, nonatomic) id<SymptomAdditionalProtocol> additionalHandler;
@property (nonatomic) SEL additionalSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithName:(id)a0;
+ (id)configureClass:(id)a0;

- (int)configureInstance:(id)a0;
- (void)_reset:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (BOOL)evaluatePrevSymptom:(id)a0 showingWorkAt:(id)a1;
- (BOOL)evaluate:(id)a0 showingWorkAt:(id)a1;
- (void).cxx_destruct;
- (BOOL)evaluateHandler:(id)a0 showingWorkAt:(id)a1;

@end
