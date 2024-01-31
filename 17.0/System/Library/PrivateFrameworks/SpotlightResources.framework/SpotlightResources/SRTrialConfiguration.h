@class NSDictionary, NSMutableDictionary;

@interface SRTrialConfiguration : NSObject {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_namespaceDescription;
    NSMutableDictionary *_parameterMap;
    NSMutableDictionary *_namespaceMap;
}

@property (readonly, nonatomic) NSDictionary *namespaceDescription;

+ (id)configuration;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)clientsForNamespace:(id)a0;
- (id)namespaceTypes;
- (id)namespaceTypesForClient:(id)a0;
- (id)namespacesForClient:(id)a0;
- (void)setParameterName:(id)a0 namespaceId:(id)a1;
- (void)setProperties:(id)a0 client:(id)a1;

@end
