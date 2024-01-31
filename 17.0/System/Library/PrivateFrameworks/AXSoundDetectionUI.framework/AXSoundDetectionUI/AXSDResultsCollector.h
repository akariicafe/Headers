@class NSArray, NSString, NSError, NSMutableArray;

@interface AXSDResultsCollector : NSObject <AXSDDetectorManagerDelegate> {
    NSMutableArray *_results;
    BOOL _didFinish;
    NSError *_error;
}

@property (readonly) NSArray *results;
@property (readonly) BOOL didFinish;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)receivedCompletion:(id)a0;
- (void)receivedError:(id)a0 fromDetector:(id)a1;
- (void)receivedObservation:(id)a0 forDetector:(id)a1;

@end
