@class NSString, CNHandleStringClassifier;

@interface _CNAPeopleSuggesterResultPrioritizer : NSObject <CNAutocompleteSuggestedResultPrioritization> {
    CNHandleStringClassifier *_handleStringClassifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)bundleIdentifierOfCurrentProcess;
+ (id)makeBundleIdentifierOfCurrentProcess;

- (id)init;
- (void).cxx_destruct;
- (id)applyPriorityOrderToResults:(id)a0 fetchRequest:(id)a1 andCompletePriorityResultsPromise:(id)a2;
- (id)partitionCandidatesForRanking:(id)a0 givenPrefix:(id)a1;
- (id)partitionStewieResults:(id)a0;
- (BOOL)resultIdentifierIsValidMessagesChatGuid:(id)a0;
- (BOOL)resultMatchesPrefix:(id)a0 inNameComponentsOfResult:(id)a1;

@end
