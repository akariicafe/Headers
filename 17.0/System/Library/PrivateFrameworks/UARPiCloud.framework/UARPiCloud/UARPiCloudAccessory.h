@class NSString, UARPiCloudAccessoryRecord, CHIPAccessoryFirmwareRecord, NSMutableArray;

@interface UARPiCloudAccessory : NSObject <NSCopying>

@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (readonly) NSString *firmwareVersion;
@property BOOL signatureValidationNeeded;
@property (copy) NSMutableArray *availableRecords;
@property (retain) UARPiCloudAccessoryRecord *record;
@property (retain) CHIPAccessoryFirmwareRecord *chipFirmwareRecord;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2;

@end
