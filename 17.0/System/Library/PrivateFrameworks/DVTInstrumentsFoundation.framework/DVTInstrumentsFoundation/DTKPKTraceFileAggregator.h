@class NSString, DVTFileStream, DTKTraceSessionCreator;
@protocol DTKPConfiguration;

@interface DTKPKTraceFileAggregator : NSObject <DTKPKtraceAggregator> {
    id<DTKPConfiguration> _config;
    BOOL _kperfSample;
    DVTFileStream *_fileStream;
    int _ktraceFD;
    DTKTraceSessionCreator *_ktraceSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pause;
- (id)initWithConfig:(id)a0;
- (id)start;
- (id)stop;
- (id)resume;
- (void).cxx_destruct;
- (int)startKtraceSession:(char *)a0 useExisting:(BOOL)a1 outputFD:(int *)a2;
- (int)stopKtraceSession;
- (id)swapOutCurrentDatastream:(id *)a0;

@end
