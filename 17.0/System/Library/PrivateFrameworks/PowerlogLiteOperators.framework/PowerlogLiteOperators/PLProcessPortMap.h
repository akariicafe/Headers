@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLProcessPortMap : NSObject

@property (retain) NSMutableDictionary *strictLookupMap;
@property (retain) NSMutableDictionary *lenientLookupMap;
@property (retain) NSMutableDictionary *localPortOnlyLookupMap;
@property (retain) NSMutableDictionary *ipAddrLookupMap;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)clearPortMap;
- (void)clearPortMapInternal;
- (id)dictFromNetPortInfo:(struct net_port_info { unsigned short x0; unsigned short x1; struct timeval32 { int x0; int x1; } x2; unsigned char x3[16]; unsigned short x4; unsigned short x5; union in_addr_4_6 { struct in_addr { unsigned int x0; } x0; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x1; } x6; union in_addr_4_6 { struct in_addr { unsigned int x0; } x0; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x1; } x7; int x8; int x9; char x10[17]; char x11[17]; unsigned char x12[16]; unsigned char x13[16]; } *)a0;
- (id)getLookupKeys:(id)a0;
- (BOOL)isAddressIPV4:(id)a0;
- (id)keyForIPAddrLookup:(id)a0 withSourceAddress:(id)a1;
- (id)keyForlenientLookup:(id)a0 withPort:(id)a1 withProtocol:(id)a2;
- (id)keyForlocalPortLookup:(id)a0 withProtocol:(id)a1;
- (id)keyFromAddress:(id)a0 withPort:(id)a1 withSourceAddress:(id)a2 withSourcePort:(id)a3 withProtocol:(id)a4;
- (id)pidAndProcessNameForDestAddress:(id)a0 withDestPort:(id)a1 withSourceAddress:(id)a2 withSourcePort:(id)a3 withProtocol:(id)a4;
- (void)reconstructPortMap;
- (void)reconstructPortMapInternal;

@end
