@class IRHistoryEventsContainerDO, NSString, IRServiceStore;
@protocol IRMiLoFeedbackProvider;

@interface IRHistoryManager : NSObject <IRPersistenceSynchronizable>

@property (weak, nonatomic) id<IRMiLoFeedbackProvider> miloFeedback;
@property (retain, nonatomic) IRHistoryEventsContainerDO *historyEventsContainer;
@property (retain, nonatomic) IRServiceStore *store;
@property (retain, nonatomic) NSString *lastMiLoLabel;
@property (retain, nonatomic) NSString *lastMiLoLabelRealTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)synchronizeAndFetchFromDBOnDisk;
- (id)_labelMiLoIfNeeded:(id)a0 lastMiLoLabel:(id)a1 shouldLabelEventWithMilo:(BOOL)a2;
- (void)addEvent:(id)a0 forCandidateIdentifier:(id)a1 withSystemState:(id)a2 andMiloPrediction:(id)a3 andMiloPredictionRealTime:(id)a4 shouldLabelEventWithMilo:(BOOL)a5;
- (id)initWithStore:(id)a0 miloFeedback:(id)a1;

@end
