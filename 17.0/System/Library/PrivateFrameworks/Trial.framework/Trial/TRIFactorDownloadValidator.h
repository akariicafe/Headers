@interface TRIFactorDownloadValidator : NSObject

+ (BOOL)validateDownloadForFactors:(id)a0 withNamespace:(id)a1 paths:(id)a2 container:(int *)a3 factorsState:(id)a4 assetIndexesByTreatment:(id *)a5 experimentIds:(id *)a6 assetIdsByFactorPack:(id *)a7 rolloutFactorNames:(id *)a8 rolloutDeployments:(id *)a9 error:(id *)a10;

@end
