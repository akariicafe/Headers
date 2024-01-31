@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding> {
    BOOL _sendsMousePointerEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL sendsMousePointerEvents;

+ (id)trackpadSender;
+ (id)tvRemoteSender;
+ (id)crownSender;
+ (id)gamepadSender;
+ (id)touchScreenDigitizerSender;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (BOOL)_isMouseSender:(id)a0;
+ (id)mouseSender;
+ (id)pencilDigitizerSender;
+ (id)globalPositionSender;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)naturalInputCollectionSender;
+ (id)keyboardSenderForDisplayUUID:(id)a0;
+ (id)phoneButtonSender;
+ (id)keyboardSender;
+ (id)senderWithProperties:(id)a0;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
