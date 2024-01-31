@class NSMutableArray, NSXPCConnection;
@protocol HADayStreamProcessorServiceProtocol;

@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject <HAMenstrualAlgorithmsPhaseIngestion>

@property (class, readonly) unsigned int algorithmVersion;

@property (retain, nonatomic) NSMutableArray *dayInputBuffer;
@property (retain) NSXPCConnection *connectionToService;
@property (retain) id<HADayStreamProcessorServiceProtocol> remoteObjectProxy;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned int)a0 error:(id *)a1;
- (void)appendDay:(id)a0;
- (void)beginPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;
- (void)endPhase:(unsigned char)a0 onJulianDay:(unsigned int)a1;

@end
