@class NSMutableArray;

@interface MFIMAPDownloadCache : NSObject {
    NSMutableArray *_downloads;
}

- (void).cxx_destruct;
- (void)addCommandsForDownload:(id)a0 toPipeline:(id)a1;
- (void)cleanUpDownloadsForUid:(unsigned int)a0;
- (id)downloadForMessage:(id)a0;
- (id)downloadForUid:(unsigned int)a0 section:(id)a1 expectedLength:(unsigned long long)a2 consumer:(id)a3;
- (id)downloadForUid:(unsigned int)a0 section:(id)a1 length:(unsigned long long)a2 consumer:(id)a3;
- (id)downloadForUid:(unsigned int)a0 section:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 consumer:(id)a3;
- (void)handleFetchResponse:(id)a0 forUid:(unsigned int)a1;
- (void)handleFetchResponses:(id)a0;
- (void)processResultsForUid:(unsigned int)a0;

@end
