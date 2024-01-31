@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (id)init;
- (void)startServices;
- (void).cxx_destruct;
- (void)stopServices;
- (void)startPreUnlockServices;

@end
