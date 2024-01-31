@class DTOSLogLoaderConfiguration;

@interface DTOSLogLoaderPrepareTicket : DTOSLogLoaderTicket

@property (retain, nonatomic) DTOSLogLoaderConfiguration *configuration;

- (void).cxx_destruct;
- (void)_setupLoaderForLoggedEventStore:(id)a0 agent:(id)a1 setDatesBasedOnSource:(BOOL)a2 genericFailureReason:(id)a3;
- (void)holdAgent:(id)a0 loader:(id)a1;

@end
