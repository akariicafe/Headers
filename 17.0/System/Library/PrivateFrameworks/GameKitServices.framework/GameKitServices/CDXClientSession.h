@class NSMutableIndexSet, NSData, CDXClient, NSObject;
@protocol OS_dispatch_source, CDXClientSessionDelegate;

@interface CDXClientSession : NSObject {
    NSData *sessionKeyPrepped_;
    long long retransmitAttempts_;
    NSData *lastSent_;
    unsigned short seq_;
    unsigned char pid_;
    unsigned short *ack_;
    NSObject<OS_dispatch_source> *retransmitTimer_;
}

@property (readonly, retain, nonatomic) CDXClient *CDXClient;
@property (nonatomic) id<CDXClientSessionDelegate> delegate;
@property (copy, nonatomic) NSData *ticket;
@property (readonly, copy, nonatomic) NSData *sessionKey;
@property (readonly, copy, nonatomic) NSMutableIndexSet *participantsInFlight;
@property (copy, nonatomic) id /* block */ inboundHandler;

- (void)dealloc;
- (void)invalidate;
- (BOOL)sendData:(id)a0;
- (id)encrypt:(id)a0;
- (id)decrypt:(id)a0 ticket:(id)a1;
- (void)recvRaw:(id)a0 ticket:(id)a1;
- (BOOL)retransmitEvent;
- (id)initWithCDXClient:(id)a0 ticket:(id)a1 sessionKey:(id)a2;
- (void)resetRetransmitTimer;
- (BOOL)sendData:(id)a0 toParticipants:(id)a1;
- (BOOL)sendRaw:(id)a0 toParticipants:(id)a1;
- (void)stopRetransmitTimer;

@end
