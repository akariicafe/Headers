@interface ACMHTTPTransport : ACFHTTPTransport

@property (nonatomic) unsigned long long identifier;

- (void)didEnd;
- (void)didStart;
- (void)updateBackgroundTask;

@end
