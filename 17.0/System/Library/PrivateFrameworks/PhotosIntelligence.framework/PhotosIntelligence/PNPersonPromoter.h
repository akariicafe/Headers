@class PNPersonDeduperProfile, PNPersonPromoterProfile, NSMutableDictionary, NSNumber, PNPersonClusterManager;
@protocol PNPhotoLibraryProtocol, PNPersonPromoterDelegate;

@interface PNPersonPromoter : NSObject

@property (weak, nonatomic) id<PNPersonPromoterDelegate> delegate;
@property (retain, nonatomic) id<PNPhotoLibraryProtocol> photoLibrary;
@property (nonatomic) float faceProcessingProgress;
@property (retain, nonatomic) NSNumber *quiescentState;
@property (retain, nonatomic) PNPersonClusterManager *personClusterManager;
@property (retain, nonatomic) PNPersonPromoterProfile *promoterProfile;
@property (retain, nonatomic) PNPersonDeduperProfile *deduperProfile;
@property (readonly, nonatomic) NSMutableDictionary *metricsReport;

+ (BOOL)isEnabled;
+ (BOOL)hasProcessedForLibrary:(id)a0;
+ (id)requestSuggestedMePersonIdentifierAtURL:(id)a0 withError:(id *)a1;
+ (void)setProcessed:(BOOL)a0 forLibrary:(id)a1;
+ (id)_personPromoterInformationAtURL:(id)a0;
+ (BOOL)_writePersonPromoterInformation:(id)a0 atURL:(id)a1;
+ (void)cumulativeNormalDistributionWithData:(id)a0 sigmaFactor:(double)a1 usingBlock:(id /* block */)a2;
+ (unsigned long long)numberOfFacesProcessedOnLastRunAtURL:(id)a0;
+ (void)probabilityDensityNormalDistributionWithData:(id)a0 sigmaFactor:(double)a1 usingBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (void)reportMetrics;
- (id)advancedStatus;
- (id)evaluatePersonPromoterWithUpdateBlock:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0 andDelegate:(id)a1;
- (BOOL)promoteUnverifiedPersonsWithUpdateBlock:(id /* block */)a0;
- (BOOL)_personClusterShouldBeVerified:(id)a0;
- (id)_graphOrderedPersonsWithPersons:(id)a0 withAllPersons:(id)a1 updateBlock:(id /* block */)a2;
- (id)_interestingPersonsFromVerifiedPersons:(id)a0 unverifiedPersons:(id)a1 updateBlock:(id /* block */)a2;
- (id)_newPersonDeduperWithVerifiedPersons:(id)a0;
- (double)_personTimespan:(id)a0;
- (BOOL)_promoteInterestingPersons:(id)a0 updateBlock:(id /* block */)a1;
- (id)_promoteUnverifiedPersons:(id)a0 withVerifiedPersons:(id)a1 updateBlock:(id /* block */)a2;
- (id)_sortedSocialGroups:(id)a0 withPersonsByLocalIdentifier:(id)a1;
- (id)_sortedUnverifiedPersonsToDedupForVerifiedPersons:(id)a0 type:(unsigned long long)a1 updateBlock:(id /* block */)a2;
- (BOOL)_updateSuggestedMeIdentifierWithPersons:(id)a0 updateBlock:(id /* block */)a1;
- (id)_verifiedPersonsToProcess;
- (void)incrementMetricForKey:(id)a0 withValue:(unsigned long long)a1;
- (id)interestingPersonsFromPersons:(id)a0 detectionType:(short)a1 updateBlock:(id /* block */)a2;
- (id)interestingPersonsFromPersons:(id)a0 updateBlock:(id /* block */)a1;
- (BOOL)isInQuiescentState;

@end
