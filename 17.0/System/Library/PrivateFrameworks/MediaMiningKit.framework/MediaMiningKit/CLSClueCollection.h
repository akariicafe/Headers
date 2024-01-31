@class NSMapTable, CLSMeaningClue, CLSInputPeopleClue;

@interface CLSClueCollection : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _recursiveLock;
    NSMapTable *_inputCluesByKey;
    NSMapTable *_outputCluesByKey;
    NSMapTable *_meaningCluesByKey;
}

@property (retain, nonatomic) CLSInputPeopleClue *mePersonClue;
@property (readonly) unsigned long long versionCount;
@property (readonly) CLSMeaningClue *locationMobilityClue;

- (double)timeInterval;
- (id)localStartDate;
- (long long)year;
- (id)universalDates;
- (id)init;
- (id)locations;
- (id)localEndDate;
- (id)description;
- (id)mePerson;
- (void).cxx_destruct;
- (id)peopleNames;
- (id)universalEndDate;
- (id)universalStartDate;
- (unsigned long long)numberOfDays;
- (unsigned long long)numberOfPersons;
- (void)enumerateLocationClues:(id /* block */)a0;
- (void)enumeratePeopleClues:(id /* block */)a0;
- (void)enumerateTimeClues:(id /* block */)a0;
- (void)enumerateTimeOfDayClues:(id /* block */)a0;
- (id)meaningCluesForKey:(id)a0;
- (void)mergeClues:(id)a0;
- (unsigned long long)numberOfLocations;
- (id)outputCluesForKey:(id)a0;
- (id)uniqueMeaningCluesForKey:(id)a0;
- (id)universalDateInterval;
- (BOOL)hasMeaningClueWithKey:(id)a0 andValue:(id)a1;
- (id)locationRegions;
- (id)peopleDescriptionWithoutPeople:(id)a0;
- (void)_incrementVersionCount;
- (void)_mergeInputClue:(id)a0;
- (void)_mergeMeaningClue:(id)a0;
- (void)_mergeOutputClue:(id)a0;
- (BOOL)hasMeaningClueWithKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (BOOL)hasOutputClueWithKey:(id)a0 andValue:(id)a1;
- (BOOL)hasOutputClueWithKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)inputClues;
- (id)inputCluesForKey:(id)a0;
- (id)localDates;
- (id)locationPlacemarks;
- (id)locationRegionsInPlacemarks;
- (id)meaningClues;
- (id)meaningCluesForKey:(id)a0 andValue:(id)a1;
- (unsigned long long)numberOfTimes;
- (id)outputClueRelatedEventsForKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)outputClueRelatedPeopleForKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)outputClueRelatedPlacesForKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)outputClues;
- (id)outputCluesForKey:(id)a0 andValue:(id)a1;
- (id)peopleDescription;
- (void)prepareWithProgressBlock:(id /* block */)a0;
- (id)uniqueInputClues;
- (id)uniqueMeaningClueForKey:(id)a0 andValue:(id)a1;
- (id)uniqueMeaningClues;
- (id)uniqueOutputClueForKey:(id)a0 andValue:(id)a1;
- (id)uniqueOutputClues;
- (id)uniqueOutputCluesForKey:(id)a0;

@end
