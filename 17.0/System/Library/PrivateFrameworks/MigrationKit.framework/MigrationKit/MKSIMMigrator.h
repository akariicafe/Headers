@class CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface MKSIMMigrator : MKMigrator {
    CoreTelephonyClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)isSupported;

- (void)remove;
- (id)init;
- (void).cxx_destruct;
- (void)import:(id)a0;
- (void)coreTelephonyClientDidInvalidateCrossPlatformPlanTransfer:(id)a0;
- (void)coreTelephonyClientDidPrepareCrossPlatformPlanTransfer:(id)a0;
- (void)importDataEncodedInJSON:(id)a0;

@end
