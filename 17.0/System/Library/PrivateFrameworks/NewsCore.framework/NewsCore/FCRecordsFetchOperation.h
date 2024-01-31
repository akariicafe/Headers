@class NSArray, NSDictionary, FCInterestToken, FCRecordSource;

@interface FCRecordsFetchOperation : FCFetchOperation {
    FCRecordSource *_recordSource;
    NSArray *_recordIdentifiers;
    NSArray *_ignoreCacheForRecordIDs;
    NSDictionary *_holdTokens;
    FCInterestToken *_fetchToken;
    FCInterestToken *_refreshToken;
}

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
