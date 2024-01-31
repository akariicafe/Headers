@interface SYBacklinkMonitorFilterCacheOperation : SYBacklinkMonitorOperation

- (long long)type;
- (void)_finishProcessingAndNotify;
- (void)_searchBacklinksForInputUserActivity;
- (void)_updateBacklinkFilterCacheWithInfos:(id)a0;

@end
