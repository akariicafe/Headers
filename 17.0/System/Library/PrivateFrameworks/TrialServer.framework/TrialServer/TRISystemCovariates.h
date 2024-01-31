@class NSDictionary, TRISystemConfiguration;

@interface TRISystemCovariates : NSObject <TRISystemCovariateProviding> {
    TRISystemConfiguration *_sysConfig;
    NSDictionary *_dictionary;
}

- (id)dictionary;
- (void).cxx_destruct;
- (id)getContextValueWithName:(id)a0;
- (id)initWithPaths:(id)a0;
- (id)tri_contextValueWithName:(id)a0;
- (id)objectForKey:(id)a0;

@end
