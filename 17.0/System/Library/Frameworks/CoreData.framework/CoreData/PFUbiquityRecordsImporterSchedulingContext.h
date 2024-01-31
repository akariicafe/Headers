@class NSMutableSet, NSMutableDictionary;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {
    NSMutableSet *_scheduledLogLocations;
    NSMutableSet *_pendingLogLocations;
    NSMutableSet *_failedLogLocations;
    NSMutableSet *_ignoredLogLocations;
    NSMutableDictionary *_logLocationsToEncounteredErrors;
    int _lock;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithPendingLogLocations:(id)a0;

@end
