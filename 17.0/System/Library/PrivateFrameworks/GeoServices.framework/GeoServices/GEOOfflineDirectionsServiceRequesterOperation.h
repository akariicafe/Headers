@class NSString;

@interface GEOOfflineDirectionsServiceRequesterOperation : GEOOfflineServiceRequesterOperation {
    NSString *_offlineCohortId;
}

- (void).cxx_destruct;
- (void)_recordAnalyticsDataForResponse:(id)a0;
- (id)initWithRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 config:(id)a3 throttleToken:(id)a4 options:(unsigned long long)a5 willSendRequestHandler:(id /* block */)a6 validationHandler:(id /* block */)a7 completionHandler:(id /* block */)a8;

@end
