@class W5Client, NSArray;

@interface WFDiagnosticsManager : NSObject

@property (retain, nonatomic) W5Client *client;
@property (retain, nonatomic) NSArray *customTestRequests;
@property (retain, nonatomic) NSArray *noInternetTestRequests;

- (id)init;
- (void).cxx_destruct;
- (id)_joinFailureDiagnosticsResultFromW5Results:(id)a0;
- (id)_noInternetDiagnosticsResultFromW5Results:(id)a0;
- (id)initWithCustomTests:(id)a0;
- (id)joinFailureTestRequestsFor:(id)a0;
- (void)runCustomDiagnosticsFor:(id)a0 withUpdate:(id /* block */)a1 result:(id /* block */)a2;
- (void)runJoinFailureDiagnosticsFor:(id)a0 withUpdate:(id /* block */)a1 result:(id /* block */)a2;
- (void)runNoInternetDiagnosticsFor:(id)a0 withUpdate:(id /* block */)a1 result:(id /* block */)a2;

@end
