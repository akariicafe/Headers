@class NSString;

@interface _UIFocusInputDeviceInfo : NSObject <NSCopying, BSXPCCoding>

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)infoWithSenderID:(unsigned long long)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithSenderID:(unsigned long long)a0;

@end
