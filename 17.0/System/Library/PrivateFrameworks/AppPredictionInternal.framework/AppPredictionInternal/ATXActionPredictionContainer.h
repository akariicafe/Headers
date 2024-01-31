@class NSString, _PASLock, ATXMinimalSlotResolutionParameters;

@interface ATXActionPredictionContainer : NSObject <ATXScoredPredictionProtocol, NSCopying> {
    _PASLock *_lock;
    struct ATXPredictionItem { NSString *key; unsigned long long actionHash; float inputSignals[817]; float score; BOOL isMediumConfidenceForBlendingLayer; BOOL isHighConfidenceForBlendingLayer; } _predictionItem;
    ATXMinimalSlotResolutionParameters *_parameters;
}

@property (nonatomic) struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } predictionItem;
@property (readonly, nonatomic) NSString *actionKey;

- (unsigned long long)hash;
- (float)score;
- (void)initializeScoredActionAndSlotSet;
- (id)initWithMinimalSlotResolutionParameters:(id)a0 score:(float)a1 actionKey:(id)a2;
- (id).cxx_construct;
- (void)setScore:(float)a0;
- (id)copy;
- (id)initWithScoredAction:(id)a0 slotSet:(id)a1 minimalSlotResolutionParameters:(id)a2 score:(float)a3 actionKey:(id)a4 predictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; })a5;
- (id)slotSet;
- (void).cxx_destruct;
- (BOOL)isEqualToActionPredictionContainer:(id)a0;
- (id)initWithScoredAction:(id)a0 slotSet:(id)a1 actionKey:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)scoredAction;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
