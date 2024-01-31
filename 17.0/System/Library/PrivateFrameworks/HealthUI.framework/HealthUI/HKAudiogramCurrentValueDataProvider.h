@class NSString, HKHealthStore, HKAudiogramSample, NSDate;

@interface HKAudiogramCurrentValueDataProvider : NSObject <HKDataProviderValue>

@property (retain, nonatomic) HKAudiogramSample *audiogram;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)a0 unitController:(id)a1 valueFont:(id)a2 unitFont:(id)a3 dateCache:(id)a4;
- (id)attributedSupplementaryStringWithDisplayType:(id)a0 unitController:(id)a1 font:(id)a2;
- (id)initWithAudiogram:(id)a0 healthStore:(id)a1 options:(unsigned long long)a2;
- (id)_attributedHearingLevelClassificationWithFont:(id)a0;
- (id)_attributedHearingLevelStatisticsWithDisplayType:(id)a0 unitController:(id)a1 valueFont:(id)a2 valueColor:(id)a3 unitFont:(id)a4 unitColor:(id)a5;
- (id)_attributedStringWithString:(id)a0 font:(id)a1 color:(id)a2;
- (id)_hearingLevelStatsWithDisplayType:(id)a0 unitController:(id)a1 shortened:(BOOL)a2;
- (BOOL)_isSupplementaryValueShortened;
- (id)_localizedAverageSensitivity:(id)a0 ear:(long long)a1 displayType:(id)a2 unitController:(id)a3 shortened:(BOOL)a4;
- (id)_rangeStringWithDisplayType:(id)a0 unitController:(id)a1;
- (id)lastUpdatedDescriptionWithDateCache:(id)a0;
- (id)lastUpdatedShortDescriptionWithDateCache:(id)a0;
- (id)stringWithDisplayType:(id)a0 unitController:(id)a1;

@end
