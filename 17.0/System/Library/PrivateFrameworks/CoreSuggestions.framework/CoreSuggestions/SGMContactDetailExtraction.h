@class PETScalarEventTracker;

@interface SGMContactDetailExtraction : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 source:(struct SGMDocumentType_ { unsigned long long x0; })a1 signature:(struct SGMTypeSafeBool_ { unsigned long long x0; })a2 detail:(struct SGMContactDetailType_ { unsigned long long x0; })a3 outcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x0; })a4 foundInSenderCNContact:(struct SGMContactDetailOwner_ { unsigned long long x0; })a5 extractionModelVersion:(unsigned long long)a6 isUnlikelyPhone:(struct SGMTypeSafeBool_ { unsigned long long x0; })a7 signatureExtractionSource:(struct SGMContactDetailExtractionSignatureSource_ { unsigned long long x0; })a8;

@end
