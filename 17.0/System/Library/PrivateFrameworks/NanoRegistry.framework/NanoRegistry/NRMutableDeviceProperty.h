@class NRPBMutableDeviceProperty;
@protocol NSObject, NSCopying;

@interface NRMutableDeviceProperty : NRMutableStateBase

@property (readonly, retain, nonatomic) id<NSObject, NSCopying> value;
@property (retain, nonatomic) NRPBMutableDeviceProperty *protobuf;

+ (BOOL)supportsSecureCoding;
+ (id)enclosedClassTypes;
+ (id)diffFrom:(id)a0 to:(id)a1;

- (id)applyDiff:(id)a0 upOnly:(BOOL)a1 notifyParent:(BOOL)a2 unconditional:(BOOL)a3;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
