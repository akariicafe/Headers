@class NSString, NSDate;

@interface GEORequestCounterCacheGetResults : GEOXPCRequest <GEOXPCRequest>

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) int requestKindRaw;
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
