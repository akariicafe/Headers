@class NSString, NSUserDefaults;

@interface TKTokenAccessDBBackedByUserDefaults : NSObject <TKTokenAccessDB> {
    NSUserDefaults *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_keyRefForRequest:(id)a0;
- (void)clearAllAccessRecords;
- (long long)fetchAccessForRequest:(id)a0;
- (void)storeAccess:(long long)a0 forRequest:(id)a1;

@end
