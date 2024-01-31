@interface IOKPowerManager : NSObject {
    unsigned int _connection;
}

+ (id)powerManager;
+ (BOOL)isSleepEnabled;

- (id)init;
- (void)dealloc;
- (BOOL)sleepSystemWithError:(id *)a0;

@end
