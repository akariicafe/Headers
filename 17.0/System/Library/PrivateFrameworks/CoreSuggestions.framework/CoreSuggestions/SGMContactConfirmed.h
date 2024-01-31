@class PETScalarEventTracker;

@interface SGMContactConfirmed : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 app:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a1 firstNameAdj:(struct SGMTypeSafeBool_ { unsigned long long x0; })a2 lastNameAdj:(struct SGMTypeSafeBool_ { unsigned long long x0; })a3 middleNameAdj:(struct SGMTypeSafeBool_ { unsigned long long x0; })a4 isUpdate:(struct SGMTypeSafeBool_ { unsigned long long x0; })a5 extracted:(struct SGMBannerExtractionType_ { unsigned long long x0; })a6 extractionModelVersion:(unsigned long long)a7 selfId:(struct SGMTypeSafeBool_ { unsigned long long x0; })a8 contactDetail:(struct SGMContactDetailType_ { unsigned long long x0; })a9;

@end
