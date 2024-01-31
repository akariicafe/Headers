@interface GEORequestResponseMetadataFile : GEOAnalyticsDataFile

- (id)initForReadWithFileDescriptor:(int)a0;
- (id)initForReadWithFilePath:(id)a0;
- (id)initForWriteWithFilePath:(id)a0;
- (BOOL)unsafe_readReqRespMetadataWithVisitorBlock:(id /* block */)a0;
- (BOOL)writeRequestResponseMetadata:(id)a0;

@end
