@protocol CalSearchDataSink;

@interface CalSearch : NSObject {
    struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *_database;
    struct CalFilter { } *_filter;
    struct __CFString { } *_searchString;
    int _seed;
    id<CalSearchDataSink> _dataSink;
    BOOL _dateToStartShowingResultsSentToDataSink;
    BOOL _moreResultsAvailable;
    struct __CFArray { } *_partialResults;
    struct __CFArray { } *_partialCachedOccurrences;
    struct __CFArray { } *_partialCachedDays;
    struct __CFArray { } *_partialCachedDaysIndexes;
    struct __CFSet { } *_matchedEventsSet;
    struct __CFSet { } *_matchedParticipantsSet;
    struct __CFSet { } *_matchedLocationsSet;
    BOOL _stopLoadingResults;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _dataSourceDeallocLock;
    BOOL _implementsCancellationCallback;
}

@property BOOL searchParticipants;
@property BOOL searchLocations;
@property BOOL searchAttendees;
@property BOOL shouldMatchLocationsOnlyForEventSearch;

- (int)seed;
- (void)dealloc;
- (void)startSearching;
- (void).cxx_destruct;
- (struct CalLocationIdsSearchContext { struct __CFArray *x0; unsigned int x1; BOOL *x2; BOOL *x3; struct CalDatabase *x4; } *)_createLocationIdsSearchContext;
- (void)_addMatchedEventIds:(struct __CFArray { } *)a0;
- (void)_addMatchedLocationIds:(struct __CFArray { } *)a0;
- (void)_addMatchedParticipantIds:(struct __CFArray { } *)a0;
- (struct CalEventIdsSearchContext { struct __CFArray *x0; struct __CFSet *x1; struct __CFSet *x2; BOOL *x3; BOOL *x4; struct CalDatabase *x5; } *)_createEventIdsSearchContext;
- (struct CalParticipantIdsSearchContext { struct __CFArray *x0; unsigned int x1; BOOL *x2; BOOL *x3; struct CalDatabase *x4; } *)_createParticipantIdsSearchContext;
- (struct CalEventOccurrenceSearchContext { struct __CFSet *x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; BOOL *x4; BOOL *x5; double x6; double x7; int x8; double x9; unsigned int x10; struct CalEventOccurrenceCache *x11; void /* function */ *x12; void *x13; int x14; BOOL x15; struct __CFString *x16; double x17; BOOL x18; double x19; } *)_createSearchContext;
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext { struct __CFArray *x0; struct __CFSet *x1; struct __CFSet *x2; BOOL *x3; BOOL *x4; struct CalDatabase *x5; } *)a0;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext { struct __CFArray *x0; unsigned int x1; BOOL *x2; BOOL *x3; struct CalDatabase *x4; } *)a0;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext { struct __CFArray *x0; unsigned int x1; BOOL *x2; BOOL *x3; struct CalDatabase *x4; } *)a0;
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext { struct __CFSet *x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; BOOL *x4; BOOL *x5; double x6; double x7; int x8; double x9; unsigned int x10; struct CalEventOccurrenceCache *x11; void /* function */ *x12; void *x13; int x14; BOOL x15; struct __CFString *x16; double x17; BOOL x18; double x19; } *)a0;
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext { struct __CFSet *x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; BOOL *x4; BOOL *x5; double x6; double x7; int x8; double x9; unsigned int x10; struct CalEventOccurrenceCache *x11; void /* function */ *x12; void *x13; int x14; BOOL x15; struct __CFString *x16; double x17; BOOL x18; double x19; } *)a0;
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext { struct __CFArray *x0; struct __CFSet *x1; struct __CFSet *x2; BOOL *x3; BOOL *x4; struct CalDatabase *x5; } *)a0;
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext { struct __CFArray *x0; struct __CFSet *x1; struct __CFSet *x2; BOOL *x3; BOOL *x4; struct CalDatabase *x5; } *)a0;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext { struct __CFArray *x0; unsigned int x1; BOOL *x2; BOOL *x3; struct CalDatabase *x4; } *)a0;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext { struct __CFArray *x0; unsigned int x1; BOOL *x2; BOOL *x3; struct CalDatabase *x4; } *)a0;
- (void)_startLoadingResults;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0 filter:(struct CalFilter { } *)a1 dataSink:(id)a2;
- (BOOL)moreResultsAvailable;
- (void)stopSearching;

@end
