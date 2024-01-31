@class NSString, NSDate;

@interface GEOExternalRequestCounterTicketBase : NSObject <GEOExternalRequestCounterTicket> {
    NSString *_requestType;
    NSString *_requestSubtype;
    NSString *_source;
    NSDate *_startDate;
    NSString *_appId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)externalRequestCounterForType:(id)a0 subtype:(id)a1 source:(id)a2 appId:(id)a3;

- (void).cxx_destruct;
- (void)_incrementExternalForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 xmitBytes:(long long)a3 recvBytes:(long long)a4 usedInterfaces:(unsigned long long)a5 requestType:(id)a6 requestSubtype:(id)a7 source:(id)a8;
- (void)requestCompletedWithAMPResult:(id)a0;

@end
