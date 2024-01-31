@class CTMobileEquipmentInfoList;

@interface ZhuGeMobileEquipmentInfoArmory : ZhuGeSingletonArmory

@property (retain) CTMobileEquipmentInfoList *mobileEquipInfoList;

+ (id)getMobileEquipInfoIn:(id)a0 ofSlot:(long long)a1;
+ (id)query:(id)a0 isCachable:(BOOL)a1 withError:(id *)a2;
+ (id)query:(id)a0 ofSlot:(long long)a1 isCachable:(BOOL)a2 withError:(id *)a3;
+ (id)queryMobileEquipInfo:(id)a0 byKey:(id)a1 withError:(id *)a2;

- (void).cxx_destruct;
- (BOOL)loadMobileEquipInfoList:(id *)a0;
- (id)query:(id)a0 ofSlot:(long long)a1 isCachable:(BOOL)a2 withError:(id *)a3;

@end
