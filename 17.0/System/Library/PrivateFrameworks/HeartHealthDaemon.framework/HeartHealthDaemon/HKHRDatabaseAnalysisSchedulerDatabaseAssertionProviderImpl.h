@class NSString, HDProfile;

@interface HKHRDatabaseAnalysisSchedulerDatabaseAssertionProviderImpl : NSObject <HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider> {
    HDProfile *_profile;
    NSString *_identifier;
}

- (id)takeAssertionWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 identifier:(id)a1;

@end
