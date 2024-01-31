@class HKMedicationsNumberToStringMap, NSURL, NSDictionary, HDSQLiteDatabase;

@interface HKMedicationsResolver : NSObject {
    HDSQLiteDatabase *_db;
    NSURL *_assetUrl;
    BOOL _dbReady;
    long long _numberOfNewNgrams;
    long long _numberOfUsedNgrams;
    HKMedicationsNumberToStringMap *_ingredients;
    HKMedicationsNumberToStringMap *_tradenames;
    NSDictionary *_abbreviations;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hkt_prepareNgramAssetWithError:(inout id *)a0;
- (long long)consecutiveLCSUsingTranscript:(id)a0 prediction:(id)a1;
- (long long)countOfContinousDigitsInLine:(id)a0;
- (id)filterAndAddGenerics:(id)a0 transcripts:(id)a1 criterion:(float)a2 limit:(long long)a3 error:(inout id *)a4;
- (id)hkt_createNgramMapsWithError:(inout id *)a0;
- (BOOL)hkt_looksLikeGenericInText:(id)a0;
- (long long)hkt_ngramIdCountWithError:(inout id *)a0;
- (id)hkt_ngramsFrom:(id)a0 minLength:(long long)a1 maxLength:(long long)a2;
- (id)hkt_ngramsWithError:(inout id *)a0;
- (BOOL)hkt_setUpDatabase;
- (id)initWithAssetUrl:(id)a0;
- (void)processNgramLine:(id)a0 n:(long long)a1;
- (BOOL)resetInMemoryDBWithError:(inout id *)a0;
- (BOOL)resetResolverWithError:(inout id *)a0;
- (id)resolveText:(id)a0 error:(inout id *)a1;

@end
