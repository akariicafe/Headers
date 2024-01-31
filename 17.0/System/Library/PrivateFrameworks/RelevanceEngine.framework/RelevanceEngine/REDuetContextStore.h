@class NSMutableDictionary;
@protocol _CDUserContext;

@interface REDuetContextStore : RESingleton {
    id<_CDUserContext> _context;
    NSMutableDictionary *_registrations;
}

- (id)_init;
- (void).cxx_destruct;
- (id)isConnectedToAudioBluetoothDeviceQuery;
- (id)isConnectedToCarQuery;
- (void)registerForQuery:(id)a0 updateBlock:(id /* block */)a1;
- (void)unregisterForQuery:(id)a0;

@end
