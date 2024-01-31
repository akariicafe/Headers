@class ATXSlotResolution;
@protocol ATXPredictionContextBuilderProtocol;

@interface ATXActionResolution : NSObject {
    ATXSlotResolution *_slotResolver;
    id<ATXPredictionContextBuilderProtocol> _predictionContextBuilder;
}

- (id)init;
- (id)statisticsForActionKey:(id)a0;
- (id)statisticsForActionKey:(id)a0 context:(id)a1;
- (id)initWithSlotResolver:(id)a0 predictionContextBuilder:(id)a1;
- (id)actionPredictionsForActionKey:(id)a0 statistics:(id)a1 appActionPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a2 appActionLogProbability:(double)a3 scoreLogger:(id)a4 andLimit:(int)a5 forMagicalMoments:(BOOL)a6 predictionItemsToKeep:(void *)a7 currentDate:(id)a8;
- (void).cxx_destruct;
- (id)actionPredictionsForActionKey:(id)a0 statistics:(id)a1 appActionPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a2 appActionLogProbability:(double)a3 scoreLogger:(id)a4 andLimit:(int)a5 forMagicalMoments:(BOOL)a6 currentDate:(id)a7;

@end
