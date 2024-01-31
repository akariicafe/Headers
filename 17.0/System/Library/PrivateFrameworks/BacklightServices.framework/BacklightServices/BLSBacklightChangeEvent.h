@class BLSBacklightChangeRequest, NSString;

@interface BLSBacklightChangeEvent : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long eventID;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long previousState;
@property (readonly, nonatomic) BLSBacklightChangeRequest *changeRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventID:(unsigned long long)a0 state:(long long)a1 previousState:(long long)a2 changeRequest:(id)a3;

@end
