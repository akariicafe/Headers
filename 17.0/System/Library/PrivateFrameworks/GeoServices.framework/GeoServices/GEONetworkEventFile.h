@interface GEONetworkEventFile : GEOAnalyticsDataFile

- (id)initForReadWithFileDescriptor:(int)a0;
- (id)initForReadWithFilePath:(id)a0;
- (id)initForWriteWithFilePath:(id)a0;
- (BOOL)unsafe_readNetworkEventDataWithVisitorBlock:(id /* block */)a0;
- (BOOL)writeNetworkEventData:(id)a0;

@end
