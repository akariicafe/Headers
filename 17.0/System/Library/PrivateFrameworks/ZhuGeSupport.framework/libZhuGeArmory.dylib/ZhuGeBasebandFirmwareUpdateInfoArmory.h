@class NSDictionary;

@interface ZhuGeBasebandFirmwareUpdateInfoArmory : ZhuGeSingletonArmory

@property (retain) NSDictionary *firmwareUpdateInfo;

+ (id)query:(id)a0 isCachable:(BOOL)a1 withError:(id *)a2;

- (void).cxx_destruct;
- (BOOL)loadFirmwareUpdateInfo:(id *)a0;
- (id)query:(id)a0 isCachable:(BOOL)a1 withError:(id *)a2;

@end
