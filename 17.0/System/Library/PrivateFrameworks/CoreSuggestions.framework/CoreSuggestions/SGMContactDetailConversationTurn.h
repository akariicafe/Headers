@class PETScalarEventTracker;

@interface SGMContactDetailConversationTurn : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 detailExtraction:(struct SGMDetailExtractionType_ { unsigned long long x0; })a1 selfIdName:(struct SGMTypeSafeBool_ { unsigned long long x0; })a2 extractionModelVersion:(unsigned long long)a3 receivedConverstationTurn:(struct SGMTypeSafeBool_ { unsigned long long x0; })a4 knownSuggestedContactDetail:(struct SGMTypeSafeBool_ { unsigned long long x0; })a5 curatedContactDetail:(struct SGMTypeSafeBool_ { unsigned long long x0; })a6 throughApp:(struct SGMContactDetailUsedApp_ { unsigned long long x0; })a7 contactDetailUsed:(struct SGMContactDetailType_ { unsigned long long x0; })a8;

@end
