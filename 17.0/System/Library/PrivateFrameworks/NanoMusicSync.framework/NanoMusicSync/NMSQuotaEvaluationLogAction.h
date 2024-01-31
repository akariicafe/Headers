@class NMSQuotaEvaluationState;

@interface NMSQuotaEvaluationLogAction : NMLogAction {
    unsigned long long _type;
    NMSQuotaEvaluationState *_state;
}

+ (id)logActionWithActionType:(unsigned long long)a0 state:(id)a1;

- (id)logMessage;
- (void).cxx_destruct;
- (id)_stringForType:(unsigned long long)a0;
- (id)_identifierLogMessage;
- (id)initWithActionType:(unsigned long long)a0 state:(id)a1;

@end
