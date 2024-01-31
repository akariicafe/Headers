@class CLSSceneConfidenceThresholdHelper;

@interface PGGraphIngestPersonAgeCategoryProcessorHelper : NSObject {
    CLSSceneConfidenceThresholdHelper *_babyScenesHelper;
    CLSSceneConfidenceThresholdHelper *_childScenesHelper;
    CLSSceneConfidenceThresholdHelper *_teenScenesHelper;
    CLSSceneConfidenceThresholdHelper *_adultScenesHelper;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)ageCategoryForPersonNode:(id)a0 ageCategoryCountedSet:(id)a1;
- (unsigned long long)ageCategoryFromAssetSamplingScenesForPersonNode:(id)a0 photoLibrary:(id)a1 curationSession:(id)a2;
- (unsigned long long)ageCategoryFromBirthdayDateComponents:(id)a0 currentDate:(id)a1;
- (unsigned long long)ageCategoryFromBirthdayDateForPersonNode:(id)a0;
- (unsigned long long)ageCategoryFromPHFaceAgeType:(unsigned short)a0;
- (unsigned long long)ageCategoryFromScenesByAssetLocalIdentifier:(id)a0 curationModelByAssetLocalIdentifier:(id)a1 personNode:(id)a2;
- (unsigned long long)ageCategoryUsingFaceAttributesForPersonNode:(id)a0 photoLibrary:(id)a1;
- (id)ageDescriptionFromAge:(unsigned long long)a0;
- (unsigned short)ageTypeFromAgeCategory:(unsigned long long)a0;
- (id)confidenceThresholdByAdultSceneIdentifierWithCurationModel:(id)a0;
- (id)confidenceThresholdByBabySceneIdentifierWithCurationModel:(id)a0;
- (id)confidenceThresholdByChildSceneIdentifierWithCurationModel:(id)a0;
- (id)confidenceThresholdByTeenSceneIdentifierWithCurationModel:(id)a0;

@end
