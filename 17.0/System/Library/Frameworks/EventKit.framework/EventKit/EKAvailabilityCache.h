@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface EKAvailabilityCache : NSObject {
    BOOL _sourceIsInvalid;
    NSString *_accountID;
    BOOL _sourceSupportsAvailabilityRequests;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_addressesToCachedSpanRanges;
    NSMutableDictionary *_ignoredEventIDsToAddressBasedCaches;
    unsigned long long _nextRequestID;
    unsigned long long _cancelledID;
}

+ (long long)_convertType:(long long)a0;
+ (id)_generateEventKitSpansFromPersistenceSpans:(id)a0;
+ (BOOL)_isValidStartDate:(id)a0 endDate:(id)a1;
+ (void)_logRequestElapsedTime:(double)a0 forNumberOfAddresses:(unsigned long long)a1;

- (id)initWithSource:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)cachedAvailabilityInDateRange:(id)a0 ignoredEventID:(id)a1 addresses:(id)a2 results:(id /* block */)a3;
- (id)_cachedSpanResultsBetweenStartDate:(id)a0 endDate:(id)a1 ignoredEventID:(id)a2 addresses:(id)a3;
- (id)_dictionaryForIgnoredEventID:(id)a0;
- (void)_handleResults:(id)a0 resultsBlock:(id /* block */)a1 ignoredEventID:(id)a2;
- (BOOL)_validateRequestStartDate:(id)a0 endDate:(id)a1 addresses:(id)a2 error:(id *)a3;
- (id)cachedAvailabilityInDateRange:(id)a0 ignoredEventID:(id)a1 addresses:(id)a2;
- (void)cancelAvailabilityRequestWithID:(id)a0;
- (id)requestAvailabilityBetweenStartDate:(id)a0 endDate:(id)a1 ignoredEventID:(id)a2 addresses:(id)a3 resultsBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;

@end
