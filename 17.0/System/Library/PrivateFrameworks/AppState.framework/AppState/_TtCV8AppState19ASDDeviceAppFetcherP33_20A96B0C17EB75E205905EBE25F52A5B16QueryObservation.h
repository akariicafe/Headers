@class NSString;

@interface _TtCV8AppState19ASDDeviceAppFetcherP33_20A96B0C17EB75E205905EBE25F52A5B16QueryObservation : NSObject <ASDAppQueryResultsObserver> {
    void /* unknown type, empty encoding */ appQuery;
    void /* unknown type, empty encoding */ taskScheduler;
    void /* unknown type, empty encoding */ observer;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)appQuery:(id)a0 resultsDidChange:(id)a1;

@end
