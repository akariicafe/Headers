@class NSString, TUCallCenter;

@interface WFCallStatusSystemEventProvider : NSObject <WFSystemEventProvider>

@property (retain, nonatomic) TUCallCenter *callCenter;
@property (copy, nonatomic) id /* block */ eventCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailable;
+ (BOOL)canProxyTelephony;

- (void)invalidate;
- (void)resume;
- (void).cxx_destruct;
- (void)callStatusChanged:(id)a0;
- (void)updateWithCall:(id)a0;

@end
