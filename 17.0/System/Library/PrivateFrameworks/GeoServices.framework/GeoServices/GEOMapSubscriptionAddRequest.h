@class NSString, GEOMapRegion, NSDate;

@interface GEOMapSubscriptionAddRequest : GEOXPCRequest <GEOXPCRequest>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long dataTypes;
@property (nonatomic) unsigned long long policy;
@property (retain, nonatomic) GEOMapRegion *region;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSDate *expirationDate;
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
