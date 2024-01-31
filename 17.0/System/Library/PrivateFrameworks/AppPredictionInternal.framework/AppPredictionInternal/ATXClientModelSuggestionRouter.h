@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (id)init;
- (BOOL)isRoutingConfigurationLoaded;
- (BOOL)shouldRouteClientToInfoSuggestionEngine:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldPersistCacheForClientModel:(id)a0;

@end
