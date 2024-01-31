@class NSString;

@interface BYDevice : NSObject <BYDeviceProvider>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long size;
@property (readonly, copy, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) BOOL hasHomeButton;
@property (readonly, nonatomic) BOOL hasActionButton;
@property (readonly, nonatomic) BOOL isPowerButtonOppositeVolumeButtons;
@property (readonly, nonatomic) BOOL hasDynamicIsland;
@property (readonly, nonatomic) int mainScreenClass;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDevice;

- (id)init;
- (void).cxx_destruct;
- (id)currentDevice;

@end
