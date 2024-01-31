@class NSDictionary;

@interface VUIActionLocationPrompt : VUIAction

@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL geoLocationEnforced;
@property (retain, nonatomic) NSDictionary *dialogMetrics;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (void)_locationAuthorizationStatusDidChange:(id)a0;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
