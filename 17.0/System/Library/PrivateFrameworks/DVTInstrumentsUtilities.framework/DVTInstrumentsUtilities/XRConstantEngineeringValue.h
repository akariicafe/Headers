@class NSString;

@interface XRConstantEngineeringValue : NSObject <XREngineeringValue, NSSecureCoding, NSCopying> {
    NSString *_mnemonic;
    unsigned short _resolvedEtypeID;
    unsigned char _implClass;
    id _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *engineeringTypeMnemonic;
@property (readonly, nonatomic) unsigned short engineeringType;
@property (readonly, nonatomic) unsigned char implClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)engineeringValueWithTypeID:(unsigned short)a0 value:(id)a1;
+ (id)engineeringValueOfType:(id)a0 value:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)objectValue;
- (long long)compare:(id)a0;
- (id)string;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateUint64Values:(id /* block */)a0;
- (double)fixedDecimal;
- (BOOL)getLengthOfUint64Representation:(unsigned long long *)a0;
- (BOOL)getValue:(id *)a0 fieldIndex:(unsigned short)a1;
- (BOOL)isEqualToConstantEngineeringValue:(id)a0;
- (unsigned int)uint32;
- (unsigned long long)uint64;

@end
