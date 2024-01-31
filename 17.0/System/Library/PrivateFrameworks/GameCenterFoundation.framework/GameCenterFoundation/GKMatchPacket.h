@class NSData;

@interface GKMatchPacket : NSObject

@property (nonatomic) unsigned char version;
@property (nonatomic) unsigned char packetType;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned int totalLength;
@property (nonatomic) unsigned short checksum;
@property (nonatomic) BOOL valid;
@property (retain, nonatomic) NSData *data;

- (id)init;
- (id)message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
