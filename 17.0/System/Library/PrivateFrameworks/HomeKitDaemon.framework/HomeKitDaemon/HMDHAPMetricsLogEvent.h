@interface HMDHAPMetricsLogEvent : HMMLogEvent {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long sentHTTPRequests;
@property (readonly, nonatomic) unsigned long long receivedHTTPResponses;
@property (readonly, nonatomic) unsigned long long receivedHTTPEvents;
@property (readonly, nonatomic) unsigned long long accessoryServerInvalidations;
@property (readonly, nonatomic) unsigned long long btleConnections;
@property (readonly, nonatomic) unsigned long long btleDiscoveries;
@property (readonly, nonatomic) unsigned long long btleConnectionPerReasons;

- (void)updateWithHAPAccessoryServer:(id)a0;

@end
