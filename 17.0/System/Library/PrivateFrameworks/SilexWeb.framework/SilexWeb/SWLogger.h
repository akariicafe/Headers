@class NSString, NSMutableDictionary;

@interface SWLogger : NSObject <SWLogger>

@property (readonly, nonatomic) NSMutableDictionary *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)logError:(id)a0;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (void)bindValue:(id)a0 forKey:(id)a1;
- (id)constructLogWithMessage:(id)a0;
- (void)logSensitive:(id)a0;

@end
