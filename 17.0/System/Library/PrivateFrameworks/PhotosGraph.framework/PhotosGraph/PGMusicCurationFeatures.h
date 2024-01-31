@class NSString;

@interface PGMusicCurationFeatures : NSObject {
    void /* unknown type, empty encoding */ memoryCategory;
    void /* unknown type, empty encoding */ memorySubcategory;
    void /* unknown type, empty encoding */ eventCollectionDuration;
    void /* unknown type, empty encoding */ eventRatioByLanguageCode;
    void /* unknown type, empty encoding */ mostFrequentMeaningLabel;
    void /* unknown type, empty encoding */ performerIdentifiers;
    void /* unknown type, empty encoding */ inferredUserLanguageCodes;
    void /* unknown type, empty encoding */ maestroSongScoresBySongID;
    void /* unknown type, empty encoding */ consistentHash;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ curatorEvents;
    void /* unknown type, empty encoding */ scoreByAssetCollectionMaestroKeyword;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldAvoidColorGrading;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
