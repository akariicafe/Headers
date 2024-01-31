@class NSString, NSMutableArray, SimpleSyndromeHandler;
@protocol AdditionalInfoProtocol;

@interface SimpleRuleEvaluator : NSObject <ConfigurableObjectProtocol> {
    NSMutableArray *_conditionsToCheck;
    char *_stringToLog;
    unsigned long long _awd_code;
    SimpleSyndromeHandler *_syndromeToCall;
    id<AdditionalInfoProtocol> _additionalInfoGenerator;
    SEL _additionalInfoSelector;
}

@property (retain, nonatomic) NSString *signatureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithName:(id)a0;
+ (id)configureClass:(id)a0;

- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)evaluateSignatureForEvent:(id)a0;
- (void).cxx_destruct;

@end
