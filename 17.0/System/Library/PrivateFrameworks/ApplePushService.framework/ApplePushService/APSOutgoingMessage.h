@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) BOOL sendRetried;
@property (nonatomic) BOOL ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (void)setTimedOut:(BOOL)a0;
- (id)channelID;
- (BOOL)wasCancelled;
- (void)setSendInterfaceIdentifier:(id)a0;
- (void)setOriginator:(id)a0;
- (id)originator;
- (BOOL)wasSent;
- (unsigned long long)pushType;
- (void)setChannelID:(id)a0;
- (long long)priority;
- (void)setCancelled:(BOOL)a0;
- (void)setTimestamp:(id)a0;
- (void)setPushFlags:(unsigned int)a0;
- (unsigned long long)_effectiveSendTimeout;
- (BOOL)hasTimedOut;
- (id)rawTimeoutTime;
- (void)setMessageID:(unsigned long long)a0;
- (void)setPriority:(long long)a0;
- (void)setSentTimestamp:(id)a0;
- (id)timestamp;
- (BOOL)isEager;
- (id)sentTimestamp;
- (unsigned long long)messageID;
- (void)setPushType:(unsigned long long)a0;
- (unsigned int)pushFlags;
- (id)eagernessTimeoutTime;
- (id)sendInterfaceIdentifier;
- (id)sendTimeoutTime;
- (void)setSent:(BOOL)a0;

@end
