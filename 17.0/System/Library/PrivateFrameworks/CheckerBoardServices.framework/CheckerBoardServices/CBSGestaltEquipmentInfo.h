@class NSString, NSArray;

@interface CBSGestaltEquipmentInfo : NSObject

@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *meid;
@property (readonly, nonatomic) NSArray *imeiArray;

+ (id)CurrentEquipmentInfo;

- (void).cxx_destruct;
- (id)initWithSerialNumber:(id)a0 andMEID:(id)a1 andIMEIArray:(id)a2;

@end
