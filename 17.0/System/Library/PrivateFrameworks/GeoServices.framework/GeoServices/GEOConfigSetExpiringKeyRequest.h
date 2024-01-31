@class NSString, NSDate;

@interface GEOConfigSetExpiringKeyRequest : GEOXPCRequest <GEOXPCRequest>

@property (retain, nonatomic) NSString *keyString;
@property (nonatomic) unsigned long long keyOptions;
@property (retain, nonatomic) NSDate *expireTime;
@property (retain, nonatomic) NSString *expireOSVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithTraits:(id)a0 auditToken:(id)a1 throttleToken:(id)a2;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (unsigned long long)reply;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
