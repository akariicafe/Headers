@class CLSSocialServiceCoreNameParser, NSString, NSURL, CLSLRUMemoryCache, CLSSocialServiceCoreDuet, CLSSocialServiceCalendar, CLSPersonIdentity, NSObject, CLSRoutineService, CLSSocialServiceContacts;

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate> {
    CLSLRUMemoryCache *_personsCache;
}

@property (readonly, nonatomic) CLSSocialServiceContacts *contactsService;
@property (readonly, nonatomic) CLSSocialServiceCoreDuet *coreDuetService;
@property (readonly, nonatomic) CLSSocialServiceCalendar *calendarService;
@property (readonly, nonatomic) CLSSocialServiceCoreNameParser *coreNameParserService;
@property (readonly, nonatomic) NSObject *routineServiceLockObject;
@property (readonly, nonatomic) BOOL hasAccessToContactsStore;
@property (retain, nonatomic) CLSPersonIdentity *mePerson;
@property (readonly, nonatomic) NSURL *applicationDataURL;
@property (readonly, nonatomic) CLSRoutineService *routineService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)sharedManagerWithURL:(id)a0;

- (id)eventsForDates:(id)a0;
- (id)locationOfInterestAtLocation:(id)a0;
- (unsigned long long)numberOfTimeMatches;
- (id)initWithURL:(id)a0;
- (id)init;
- (unsigned long long)numberOfLocationsOfInterest;
- (id)personsFromEventParticipants:(id)a0 excludeCurrentUser:(BOOL)a1;
- (unsigned long long)numberOfVisits;
- (void)postProcessLocationsOfInterest;
- (id)coreDuetPersonSuggestionsOnDate:(id)a0;
- (void)invalidatePersonsCacheForPersonsWithContactIdentifiers:(id)a0;
- (double)pinningVisitsRatio;
- (BOOL)routineIsAvailable;
- (unsigned long long)relationshipHintForPerson:(id)a0 usingLocales:(id)a1;
- (id)mePersonAddressesOfType:(unsigned long long)a0;
- (void)enumerateEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)personsInContactStoreForContactIdentifiers:(id)a0 needsRefetching:(BOOL)a1 progressBlock:(id /* block */)a2;
- (id)matchingDictionaryForContactIdentifier:(id)a0;
- (id)lastLocationOfInterestVisit;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)personForIdentifier:(id)a0;
- (void)invalidateCacheForPersonInContactStoreWithContactIdentifiers:(id)a0;
- (void)enumeratePersonsForIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)a0 fromUniversalDate:(id)a1 toUniversalDate:(id)a2;
- (void)flushSocialServicesAtURL:(id)a0;
- (void)prefetchEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 forAssetCollectionsSortedByStartDate:(id)a2 usingBlock:(id /* block */)a3;
- (void)enumeratePersonsForFullname:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasAddressesForMePerson;
- (unsigned long long)numberOfCloseByLocationMatches;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0;
- (id)inferredDeviceOwnerForPhotoLibrary:(id)a0 ignoreContactLinking:(BOOL)a1;
- (id)personForPersonHandle:(id)a0;
- (void)invalidateMePerson;
- (void)invalidatePermanentMemoryCaches;
- (void).cxx_destruct;
- (void)enumeratePersonsAndRelationshipUsingBlock:(id /* block */)a0;
- (id)eventsForClueCollection:(id)a0;
- (BOOL)canAccessContactsStore;
- (id)fetchImportantLocationsOfInterest;
- (unsigned long long)numberOfMatchRequests;
- (id)predominantLocationMobilityForDateInterval:(id)a0 confidence:(double *)a1;
- (void)invalidateMomentaryMemoryCaches;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (id)personResultsForName:(id)a0 inPhotoLibrary:(id)a1;
- (void)invalidatePersonsCacheForPersonsWithNames:(id)a0;
- (id)fetchLocationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (id)contactsForIdentifiers:(id)a0;
- (unsigned long long)numberOfRemoteLocationMatches;
- (id)personResultForName:(id)a0 inPhotoLibrary:(id)a1;
- (unsigned long long)sexHintForPerson:(id)a0 usingLocales:(id)a1;
- (void)enumerateAllPersonsUsingBlock:(id /* block */)a0;

@end
