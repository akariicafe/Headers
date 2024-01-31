@interface SGDeduper : NSObject

+ (id /* block */)resolveByPairs:(id /* block */)a0;
+ (id)_dedupeGenericContactDetails:(id)a0;
+ (id)_dedupePostalAddresses:(id)a0;
+ (id /* block */)bucketerWithEqualityTest:(id /* block */)a0;
+ (id /* block */)bucketerWithLabeledBuckets:(id /* block */)a0;
+ (id /* block */)bucketerWithMapping:(id /* block */)a0;
+ (id)dedupe:(id)a0 bucketer:(id /* block */)a1 resolver:(id /* block */)a2;
+ (id)dedupeContactDetails:(id)a0;
+ (void)enumerateEKEventsForPseudoEventBySimilarStartAndEndTime:(id)a0 store:(id)a1 usingBlock:(id /* block */)a2;
+ (unsigned char)eventsHaveIdenticalReservationIds:(id)a0 ekEventFromStore:(id)a1;
+ (BOOL)eventsHaveSimilarTitles:(id)a0 ekEventFromStore:(id)a1;
+ (id /* block */)resolveByScoreBreakTiesArbitrarily:(id /* block */)a0;
+ (id /* block */)resolveSGContactDetailsPreferringPhraseExtractionsAndLabels;
+ (id)splitContactDetailsByType:(id)a0;

@end
