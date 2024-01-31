@class NSString, CUEnvironment, NSObject, SKSetupBase;
@protocol OS_dispatch_queue, CUMessaging;

@interface SKStepWiFiPreflight : NSObject <CUEnvironmentable, CULabelable, SKStepable> {
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (nonatomic) BOOL preventAppleWiFi;
@property (retain, nonatomic) CUEnvironment *environment;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ skCompletionHandler;
@property (retain, nonatomic) id<CUMessaging> skMessaging;
@property (weak, nonatomic) SKSetupBase *skSetupObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (BOOL)checkWiFiAndReturnError:(id *)a0;

@end
