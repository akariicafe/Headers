@class GEORequestCounterRemoteProxy;

@interface _GEORemoteRequestCounterTicket : GEORequestCounterTicketBase {
    GEORequestCounterRemoteProxy *_remoteProxy;
}

+ (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 auditToken:(id)a1 traits:(id)a2 remoteProxy:(id)a3;

- (void)_incrementForApp:(id)a0 offlineCohortId:(id)a1 requestMode:(int)a2 startTime:(id)a3 endTime:(id)a4 requestType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a5 result:(unsigned char)a6 error:(id)a7 xmitBytes:(long long)a8 recvBytes:(long long)a9 usedInterfaces:(unsigned long long)a10;
- (void).cxx_destruct;

@end
