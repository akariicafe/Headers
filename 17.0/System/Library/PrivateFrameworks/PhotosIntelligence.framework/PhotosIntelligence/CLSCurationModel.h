@class CLSEntityNetModel, CLSIconicScoreModel;

@interface CLSCurationModel : CLSCurationModel_v5

@property (readonly) CLSEntityNetModel *entityNetModel;
@property (readonly) CLSIconicScoreModel *iconicScoreModel;
@property (readonly) unsigned long long similarityModelVersion;

+ (void)logInfo:(id)a0 prefix:(id)a1 avoidForKeyAssetStatistics:(const struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct { unsigned int x0; } x14; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x15; } *)a2;
+ (id)baseSpecificationWithSpecification:(id)a0;
+ (id)firstReasonForAvoidForKeyAssetFromStatistics:(const struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct { unsigned int x0; } x14; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x15; } *)a0;
+ (void)logInfoInIndividualLine:(id)a0 prefix:(id)a1 avoidForKeyAssetStatistics:(const struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct { unsigned int x0; } x14; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x15; } *)a2;

- (void).cxx_destruct;
- (id)initWithCurationModelSpecification:(id)a0;

@end
