@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying, BSXPCCoding, BSXPCSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)systemEnvironment;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)environmentWithIdentifier:(id)a0;
+ (id)keyboardFocusEnvironment;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isSystemEnvironment;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)_isKeyboardFocusEnvironment;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
