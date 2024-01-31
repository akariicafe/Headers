@class NSString, HMHomeManager, IDSService;

@interface HomeKitAgent : NSObject <HMHomeManagerDelegate> {
    HMHomeManager *_homeManager;
    BOOL _didUpdateHomes;
    IDSService *_idsService;
    id /* block */ _completionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_loadHomeKit;

- (id)initWithIDSService:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)_replyWithResidentDevicesIDSIdentifiers:(id /* block */)a0;
- (void)fetchResidentDevicesIDSIdentifiersWithReply:(id /* block */)a0;

@end
