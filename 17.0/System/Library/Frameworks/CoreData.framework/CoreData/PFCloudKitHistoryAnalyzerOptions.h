@class NSCloudKitMirroringRequest;

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {
    BOOL _includePrivateTransactions;
    NSCloudKitMirroringRequest *_request;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
