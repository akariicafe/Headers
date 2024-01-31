@class NSObject;
@protocol OS_xpc_object;

@interface TRIRemoteAssetExtractor : NSObject <TRIAssetExtracting> {
    NSObject<OS_xpc_object> *_monitoredActivity;
}

- (id)init;
- (id)initWithMonitoredActivity:(id)a0;
- (struct { unsigned char x0; })extractArchiveFromFile:(id)a0 withArchiveName:(id)a1 toEmptyDirectory:(id)a2 postExtractionCompression:(struct { unsigned long long x0; })a3 error:(id *)a4;
- (void).cxx_destruct;

@end
