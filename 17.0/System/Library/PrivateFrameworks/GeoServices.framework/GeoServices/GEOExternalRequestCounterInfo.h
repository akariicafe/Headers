@class NSString, NSDate;

@interface GEOExternalRequestCounterInfo : NSObject <GEOXPCSerializable>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) long long xmitBytes;
@property (nonatomic) long long recvBytes;
@property (nonatomic) unsigned long long usedInterface;
@property (retain, nonatomic) NSString *requestType;
@property (retain, nonatomic) NSString *requestSubtype;
@property (retain, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
