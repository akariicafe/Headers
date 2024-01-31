@class NSString;

@interface AWDigitizerButtonKeyboardAttentionEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, nonatomic) NSString *displayUUID;

- (void)validateMask;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 digitizerButtonKeyboardMetadata:(struct AWDigitizerButtonKeyboardMetadata { unsigned long long x0; struct __CFString *x1; } *)a2;

@end
