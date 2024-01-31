@class DTOSLogLoader, DTOSLogLoaderConfiguration, NSData, NSError, XRMobileAgentDock;

@interface DTActivityTraceTapLocalShuttle : XRMobileAgent <DTOSLogLoaderVisitor> {
    id _commonFetchTicket;
}

@property (nonatomic) BOOL didPrepare;
@property (nonatomic) BOOL shouldStart;
@property (nonatomic) BOOL didStart;
@property (nonatomic) BOOL shouldStop;
@property (nonatomic) BOOL didStop;
@property (nonatomic) BOOL shouldFetch;
@property (retain, nonatomic) DTOSLogLoaderConfiguration *configuration;
@property (copy, nonatomic) id /* block */ processDetectionCallback;
@property (nonatomic) double fetchWindow;
@property (retain, nonatomic) DTOSLogLoader *loaderStop;
@property (retain, nonatomic) XRMobileAgentDock *ownersDock;
@property (retain, nonatomic) NSData *nextOutputBytes;
@property (nonatomic, getter=isFetchComplete) BOOL fetchComplete;
@property (nonatomic) unsigned long long lastMachContinuousTime;
@property (nonatomic) unsigned int lostEventsSinceLastVisit;
@property (retain, nonatomic) NSError *failureReason;

- (void).cxx_destruct;
- (void)addPidToExecEntriesFromMapping:(id)a0;
- (void)executeStopOnItinerary:(id)a0;

@end
