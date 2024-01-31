@class PETScalarEventTracker;

@interface SGMMaybeInformationShown : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 extracted:(struct SGMBannerExtractionType_ { unsigned long long x0; })a1 extractionModelVersion:(unsigned long long)a2;

@end
