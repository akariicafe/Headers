@class NSString, PGMeaningfulEventNumberTrait, PGMeaningfulEventLocationCollectionTrait, NSMutableDictionary, PGMeaningfulEventLocationMobilityTrait, NSDictionary, PGMeaningfulEventSceneCollectionTrait, PGMeaningfulEventCollectionTrait, PGMeaningfulEventPartOfDayTrait;

@interface PGMeaningfulEventRequiredCriteria : PGMeaningfulEventCriteria

@property (retain, nonatomic) NSMutableDictionary *internalAdditionalInfo;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *meaningNodeLabel;
@property (readonly, nonatomic) double minimumScore;
@property (nonatomic) BOOL mustBeInteresting;
@property (retain, nonatomic) PGMeaningfulEventSceneCollectionTrait *scenesTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *roisTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *poisTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationCollectionTrait *locationsTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *datesTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *peopleTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *socialGroupsTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *publicEventCategoriesTrait;
@property (readonly, nonatomic) NSDictionary *additionalInfo;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithIdentifier:(id)a0 minimumScore:(double)a1 graph:(id)a2;
- (void)setAdditionalInfoForKey:(id)a0 value:(id)a1;

@end
