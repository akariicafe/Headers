@class NSDictionary, NSString, NSDate;

@interface SADevicesWithSafeLocationsEvent : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *devices;
@property (readonly, copy, nonatomic) NSDictionary *safeLocations;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (id)initWithDevices:(id)a0 safeLocationUUIDs:(id)a1 date:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (void).cxx_destruct;
- (id)getDate;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
