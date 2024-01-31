@class NSOutputStream, KVDatasetBuilder, NSURL, NSObject, KVProfileInfo;
@protocol KVProfileWriter;

@interface KVProfileBuilder : NSObject {
    NSOutputStream *_stream;
    KVProfileInfo *_profileInfo;
    NSObject<KVProfileWriter> *_writer;
    KVDatasetBuilder *_activeDataset;
    unsigned int _datasetCount;
    NSURL *_fileURL;
}

+ (id)builderWithProfileInfo:(id)a0 format:(unsigned char)a1 error:(id *)a2;
+ (id)fileWriterWithProfileInfo:(id)a0 targetDirectory:(id)a1 format:(unsigned char)a2 error:(id *)a3;
+ (id)fileWriterWithProfileInfo:(id)a0 targetDirectory:(id)a1 filename:(id)a2 format:(unsigned char)a3 error:(id *)a4;
+ (void)initalize;

- (id)init;
- (id)buildWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_finishWithError:(id *)a0;
- (id)_fileURL;
- (id)addDataset:(id)a0 error:(id *)a1;
- (id)finishWritingWithError:(id *)a0;
- (id)_buildWithError:(id *)a0;
- (id)initWithProfileInfo:(id)a0 outputStream:(id)a1 fileURL:(id)a2 format:(unsigned char)a3 provider:(id)a4 error:(id *)a5;

@end
