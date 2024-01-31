@class CXCallObserver;

@interface PSUICoreTelephonyCallCache : NSObject

@property (retain, nonatomic) CXCallObserver *callObserver;

+ (id)sharedInstance;

- (id)init;
- (id)getLogger;
- (void).cxx_destruct;
- (id)initPrivate:(id)a0;
- (BOOL)isAnyCallActive;
- (BOOL)isActiveCallSubtype:(const char *)a0;
- (BOOL)isActiveCallVoLTE;
- (BOOL)isActiveCallVoNR;
- (BOOL)isAnyCallActiveForProviderIdentifier:(id)a0;
- (BOOL)isAnyTelephonyCallActive;
- (BOOL)isAnyVOIPCallActive;
- (id)localizedPhoneNumber:(id)a0 context:(id)a1;

@end
