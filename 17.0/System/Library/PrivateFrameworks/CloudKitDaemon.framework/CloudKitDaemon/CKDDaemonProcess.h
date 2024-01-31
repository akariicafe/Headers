@class NSString, C2Multipeer;

@interface CKDDaemonProcess : NSObject <C2MultipeerChunkDelegate>

@property (readonly, nonatomic) long long processType;
@property (readonly, nonatomic) BOOL isSystemInstalledBinary;
@property (retain, nonatomic) C2Multipeer *multipeer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentProcess;
+ (void)deriveCurrentProcessWithArgC:(int)a0 argv:(const char **)a1;

@end
