@class NSString, GKSessionInternal;

@interface GKPeerInternal : NSObject <GKTableCleanupWhenRemoved> {
    id *_addrList;
    unsigned int *_interfaceList;
    struct _DNSServiceRef_t **_lookupServiceList;
    int _lookupServiceCount;
    int _lookupServiceSize;
}

@property (readonly) unsigned int pid;
@property (readonly) NSString *displayName;
@property (readonly) NSString *serviceName;
@property (getter=isBusy) BOOL busy;
@property int serviceCount;
@property struct _DNSServiceRef_t { } *resolveService;
@property struct _DNSServiceRef_t { } *txtRecordService;
@property unsigned int servicePort;
@property BOOL moreResolvesComing;
@property (retain, nonatomic) GKSessionInternal *session;
@property double connectTimeout;
@property BOOL needsToTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)freeLookupList:(struct _DNSServiceRef_t **)a0 andAddrList:(id *)a1 andInterfaceList:(unsigned int *)a2 count:(int)a3;

- (void)dealloc;
- (void)addLookup:(struct _DNSServiceRef_t { } *)a0;
- (void)cleanupForGKTable:(id)a0;
- (void)clearResolving;
- (BOOL)containsLookupService:(struct _DNSServiceRef_t { } *)a0;
- (void)copyLookupList:(struct _DNSServiceRef_t ***)a0 count:(int *)a1;
- (id)initWithPID:(unsigned int)a0 displayName:(id)a1 serviceName:(id)a2;
- (void)removeAndReturnLookupList:(struct _DNSServiceRef_t ***)a0 andAddrList:(id **)a1 andInterfaceList:(unsigned int **)a2 count:(int *)a3;
- (void)setAddr:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0 interface:(unsigned int)a1 forLookupService:(struct _DNSServiceRef_t { } *)a2;
- (void)stopResolving;
- (void)stopTXTRecordMonitoring;
- (BOOL)tryDetruncateDisplayName:(id)a0;
- (int)usableAddrs;

@end
