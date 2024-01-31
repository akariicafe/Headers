@class NSUUID, NSData, NSMutableData;

@interface PipeDataTransfer : NSObject

@property (retain) NSUUID *peerUUID;
@property unsigned char txSeqNum;
@property unsigned short txTotalLenToSend;
@property (retain) NSData *txTotalDataToSend;
@property (retain) NSData *txData;
@property unsigned long long txDataLeftToSend;
@property unsigned char rxSeqNum;
@property BOOL rxFirstPacket;
@property unsigned short rxTotalLenToReceive;
@property (retain) NSData *rxTotalDataToReceive;
@property (retain) NSData *rxData;
@property unsigned short rxCurrentDataSize;
@property (retain) NSMutableData *rxCurrentReceivedData;
@property (retain) NSMutableData *rxTotalDataWithLen;
@property BOOL rxWaitForMoreData;

- (id)description;
- (void).cxx_destruct;
- (void)resetRxTransfer;
- (void)resetTxTransfer;
- (unsigned char)generateSequenceNumber;
- (id)initPipeDataTransferForPeer:(id)a0;
- (void)resetAllTransfer;

@end
