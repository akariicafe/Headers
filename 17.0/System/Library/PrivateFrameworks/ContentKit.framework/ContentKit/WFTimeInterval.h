@class NSString, NSDateComponentsFormatter;

@interface WFTimeInterval : NSObject <NSCopying, WFSerializableContent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateComponentsFormatter *timeIntervalFormatter;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) unsigned long long allowedUnits;
@property (readonly, nonatomic) long long unitsStyle;
@property (readonly, nonatomic) unsigned long long zeroFormattingBehavior;
@property (readonly, nonatomic) NSString *absoluteTimeString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)initWithTimeInterval:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)wfName;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeInterval:(double)a0 allowedUnits:(unsigned long long)a1 unitsStyle:(long long)a2 zeroFormattingBehavior:(unsigned long long)a3;

@end
