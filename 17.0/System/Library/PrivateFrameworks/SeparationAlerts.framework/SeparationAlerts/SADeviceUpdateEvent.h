@class NSString, SADevice, NSDate;

@interface SADeviceUpdateEvent : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SADevice *device;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) BOOL lastEvent;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (void).cxx_destruct;
- (id)getDate;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDevice:(id)a0 eventType:(unsigned long long)a1 lastEvent:(BOOL)a2 date:(id)a3;

@end
