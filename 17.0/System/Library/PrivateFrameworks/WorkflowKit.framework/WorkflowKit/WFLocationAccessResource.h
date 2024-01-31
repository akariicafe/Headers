@class NSString, WFWorkflow, CLLocationManager;

@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate> {
    WFWorkflow *_workflow;
}

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (copy, nonatomic) id /* block */ makeAvailableCompletionHandler;
@property (nonatomic) int authorizationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSystemResource;

- (id)icon;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (unsigned long long)status;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (id)name;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)setWorkflow:(id)a0;
- (id)workflow;
- (void)finishMakingAvailableWithSuccess:(BOOL)a0 error:(id)a1;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
