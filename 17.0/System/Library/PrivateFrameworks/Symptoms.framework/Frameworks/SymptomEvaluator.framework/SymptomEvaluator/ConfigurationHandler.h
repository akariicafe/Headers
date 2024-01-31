@class NSString;

@interface ConfigurationHandler : NSObject <ManagedEventInfoProtocol, SymptomAdditionalProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;
+ (int)read:(id)a0 returnedValues:(id)a1;
+ (void)dumpAll;
+ (void)setConfigurationObject:(id)a0 forName:(id)a1;
+ (int)configureItems:(id)a0;
+ (id)classRepresentativeForName:(id)a0;
+ (id)objectForName:(id)a0;

- (void)_dumpState;
- (int)configure:(id)a0;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (void)setAnnotation:(id)a0;
- (id)init;
- (BOOL)noteSymptom:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)_setAnnotation:(id)a0;
- (id)_configureBuildDetails:(id)a0;
- (id)_configureHandlerClass:(id)a0;

@end
