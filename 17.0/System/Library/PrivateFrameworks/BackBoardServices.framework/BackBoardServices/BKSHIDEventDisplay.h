@class NSString;

@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)builtinDisplay;
+ (id)nullDisplay;
+ (id)displayWithHardwareIdentifier:(id)a0;

- (id)init;
- (id)initForProtobufDecoding;
- (id)_hardwareIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithHardwareIdentifier:(id)a0;
- (BOOL)_isBuiltinDisplay;
- (BOOL)_isNullDisplay;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
