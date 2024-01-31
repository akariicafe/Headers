@class NSNumber, NSArray;

@interface IECSInterface_GoldRestore2 : NSObject {
    BOOL _userClientActive;
    struct IOCFPlugInInterfaceStruct **_cfPlugInInterface;
    struct AppleHPMLibInterfaceStructV3 **_deviceInterface;
}

@property (readonly) NSNumber *rid;
@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int deviceService;
@property (retain, nonatomic) NSArray *locatedObjects;

+ (id)sharedInstance;
+ (id)locatedDevices;

- (id)init;
- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (void).cxx_destruct;
- (id)createFileNameForFirmware:(id *)a0;
- (int)createUserClient;
- (void)destroyUserClient;
- (int)iecsAtomicCommand:(unsigned int)a0 data:(void *)a1 dataLength:(unsigned long long)a2 retData:(void *)a3 retDataLength:(unsigned long long)a4 flags:(unsigned int)a5 timeout:(unsigned long long)a6;
- (int)iecsReadForAddress:(unsigned char)a0 buffer:(void *)a1 length:(unsigned long long)a2 flags:(unsigned int)a3 andOutReadLength:(unsigned long long *)a4;
- (int)iecsWaitForIdle:(unsigned int)a0 pollInterval:(unsigned int)a1 timeout:(unsigned int)a2;
- (int)iecsWriteForAddress:(unsigned char)a0 buffer:(void *)a1 length:(unsigned long long)a2 flags:(unsigned int)a3;
- (id)initWithService:(unsigned int)a0 isHCPM:(BOOL)a1;

@end
