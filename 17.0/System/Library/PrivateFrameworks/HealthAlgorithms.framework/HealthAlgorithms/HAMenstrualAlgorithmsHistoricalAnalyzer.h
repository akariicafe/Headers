@class NSMutableArray, NSXPCConnection;
@protocol HAHistoricalAnalyzerServiceProtocol;

@interface HAMenstrualAlgorithmsHistoricalAnalyzer : NSObject <HAMenstrualAlgorithmsPhaseIngestion>

@property (class, readonly) unsigned int algorithmVersion;

@property (retain, nonatomic) NSMutableArray *dayInputBuffer;
@property (retain) NSXPCConnection *connectionToService;
@property (retain) id<HAHistoricalAnalyzerServiceProtocol> remoteObjectProxy;

- (id)init;
- (void)dealloc;
- (id)analyzeWithError:(id *)a0;
- (void).cxx_destruct;
- (void)appendDay:(id)a0;
- (void)beginPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;
- (void)endPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;

@end
