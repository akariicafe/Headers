@class NSString;

@interface BKSHIDKeyboardDeviceProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable> {
    NSString *_transport;
    NSString *_language;
    NSString *_layout;
    unsigned int _standardType;
    long long _subinterfaceID;
    unsigned char _countryCode;
    BOOL _capsLockKeyHasLanguageSwitchLabel;
    BOOL _globeKeyLabelHasGlobeSymbol;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *transport;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *layout;
@property (readonly, nonatomic) unsigned char countryCode;
@property (readonly, nonatomic) unsigned int standardType;
@property (readonly, nonatomic) long long subinterfaceID;
@property (readonly, nonatomic) BOOL capsLockKeyHasLanguageSwitchLabel;
@property (readonly, nonatomic) BOOL globeKeyLabelHasGlobeSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)new;
+ (id)build:(id /* block */)a0;

- (id)init;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
