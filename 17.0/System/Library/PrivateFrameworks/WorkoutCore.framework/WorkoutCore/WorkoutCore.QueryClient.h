@interface WorkoutCore.QueryClient : NSObject <_HKXPCExportable> {
    void /* unknown type, empty encoding */ serverQueue;
    void /* unknown type, empty encoding */ clientQueue;
    void /* unknown type, empty encoding */ pluginProxyProvider;
}

- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)init;
- (void).cxx_destruct;

@end
