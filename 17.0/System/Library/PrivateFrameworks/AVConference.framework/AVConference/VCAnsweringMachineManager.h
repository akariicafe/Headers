@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCAnsweringMachineManager : VCXPCManager <VCAnsweringMachineDelegate> {
    NSMutableArray *_instances;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)registerBlocksForService;
+ (void)registerAnsweringMachineInitialize;
+ (void)registerAnsweringMachineStart;
+ (void)registerAnsweringMachineStop;
+ (void)registerAnsweringMachineTerminate;

- (id)init;
- (void)dealloc;
- (void)answeringMachine:(id)a0 didFinishAnnouncement:(BOOL)a1 error:(id)a2;
- (void)answeringMachine:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)answeringMachine:(id)a0 didStop:(BOOL)a1 recordingURL:(id)a2 error:(id)a3;

@end
