@class NSString, NSMutableArray;
@protocol SymptomAdditionalProtocol;

@interface SimpleSymptomEvaluator : NSObject <ConfigurableObjectProtocol> {
    id<SymptomAdditionalProtocol> symptomAdditionalHandlers[4];
}

@property (retain, nonatomic) NSString *symptomName;
@property (retain, nonatomic) NSString *symptomKey;
@property (nonatomic) unsigned int symptomSaveFlags;
@property (nonatomic) unsigned int symptomSaveAdditionalId;
@property (nonatomic) unsigned int symptomMaxRetainTime;
@property (retain, nonatomic) NSMutableArray *symptomRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_defaultEvaluator;
+ (id)objectWithName:(id)a0;
+ (void)postIncomingEvent:(id)a0;
+ (id)configureClass:(id)a0;

- (int)configureInstance:(id)a0;
- (id)initWithName:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void).cxx_destruct;
- (void)evaluateIncomingEvent:(id)a0;

@end
