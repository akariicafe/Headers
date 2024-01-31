@class NSDictionary;

@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_serializedBackingStore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long voiceTriggerEnabled;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)serializedBackingStore;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVoiceTriggerEnabled:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
