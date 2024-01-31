@class NSString, HMHomeManager, NSMutableDictionary;
@protocol _TVRCMatchPointDeviceQueryDelegate, NSObject;

@interface TVRCMatchPointDeviceQuery : NSObject <HMHomeManagerDelegatePrivate>

@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) id<NSObject> homekitActiveAssertion;
@property (retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping;
@property (weak, nonatomic) id<_TVRCMatchPointDeviceQueryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateCurrentHome:(id)a0;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)_matchPointServiceAdded:(id)a0;
- (void)_matchPointServiceNameChanged:(id)a0;
- (void)_matchPointServiceRemoved:(id)a0;
- (void)_notifyAddedService:(id)a0;
- (void)_notifyRemovedService:(id)a0;

@end
