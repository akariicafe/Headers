@class AVCStatisticsCollector, VCRateControlMediaController, VCBasebandMetrics;

@interface AVCBasebandCongestionDetector : NSObject {
    VCBasebandMetrics *_basebandMetrics;
    double _notificationArrivalTime;
    void *_logBasebandDump;
}

@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) BOOL isTargetBitrateStabilized;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (retain, nonatomic) VCRateControlMediaController *mediaController;
@property (readonly, nonatomic) unsigned int basebandTxBitrate;
@property (readonly, nonatomic) unsigned int basebandAverageBitrate;
@property (readonly, nonatomic) unsigned int basebandQueueDepth;
@property (readonly, nonatomic) double basebandExpectedQueuingDelay;

- (id)init;
- (void)dealloc;
- (void)enableBasebandLogDump:(void *)a0;
- (BOOL)isRadioAccessTechnologyOnCellular:(unsigned int)a0;
- (void)printFlushAckToBasebandDump:(unsigned char)a0 transactionID:(unsigned short)a1 packetDropped:(unsigned short)a2 sequenceNumberArray:(unsigned short *)a3;
- (void)processBasebandAck:(struct { int x0; unsigned short x1; double x2; union { struct { unsigned short x0; unsigned char x1; unsigned short x2; unsigned char x3; char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct { unsigned short x0; unsigned short x1; unsigned short x2; struct { unsigned char x0; unsigned short x1; unsigned short x2[500]; } x3[6]; } x1; struct { unsigned short x0; unsigned short x1; } x2; } x3; } *)a0;
- (BOOL)processBasebandNotification:(struct { int x0; unsigned short x1; double x2; union { struct { unsigned short x0; unsigned char x1; unsigned short x2; unsigned char x3; char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct { unsigned short x0; unsigned short x1; unsigned short x2; struct { unsigned char x0; unsigned short x1; unsigned short x2[500]; } x3[6]; } x1; struct { unsigned short x0; unsigned short x1; } x2; } x3; } *)a0 arrivalTime:(double)a1 error:(id *)a2;
- (BOOL)processBasebandNotification:(id)a0 metaData:(id)a1 error:(id *)a2;

@end
