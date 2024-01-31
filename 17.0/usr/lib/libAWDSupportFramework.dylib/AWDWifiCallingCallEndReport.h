@class NSString;

@interface AWDWifiCallingCallEndReport : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _frameErasureRateHistograms;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _jitterBufferResidencyTimeHistograms;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _jitterBufferUnderflowRateHistograms;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _rtpPacketLossRateHistograms;
    struct { unsigned char timestamp : 1; unsigned char dlVocoderBitRate : 1; unsigned char frameErasureRateMean : 1; unsigned char jitterBufferResidencyTime95Percentile : 1; unsigned char jitterBufferResidencyTimeMean : 1; unsigned char jitterBufferResidencyTimeMedian : 1; unsigned char jitterBufferUnderflowRateMean : 1; unsigned char ratType : 1; unsigned char rtpPacketLossRateMean : 1; unsigned char ulVocoderBitRate : 1; unsigned char vocoderSampleRate : 1; unsigned char vocoderType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasCallID;
@property (retain, nonatomic) NSString *callID;
@property (readonly, nonatomic) unsigned long long rtpPacketLossRateHistogramsCount;
@property (readonly, nonatomic) unsigned int *rtpPacketLossRateHistograms;
@property (readonly, nonatomic) unsigned long long jitterBufferUnderflowRateHistogramsCount;
@property (readonly, nonatomic) unsigned int *jitterBufferUnderflowRateHistograms;
@property (readonly, nonatomic) unsigned long long frameErasureRateHistogramsCount;
@property (readonly, nonatomic) unsigned int *frameErasureRateHistograms;
@property (readonly, nonatomic) unsigned long long jitterBufferResidencyTimeHistogramsCount;
@property (readonly, nonatomic) unsigned int *jitterBufferResidencyTimeHistograms;
@property (nonatomic) BOOL hasRtpPacketLossRateMean;
@property (nonatomic) unsigned int rtpPacketLossRateMean;
@property (nonatomic) BOOL hasJitterBufferUnderflowRateMean;
@property (nonatomic) unsigned int jitterBufferUnderflowRateMean;
@property (nonatomic) BOOL hasFrameErasureRateMean;
@property (nonatomic) unsigned int frameErasureRateMean;
@property (nonatomic) BOOL hasJitterBufferResidencyTimeMean;
@property (nonatomic) unsigned int jitterBufferResidencyTimeMean;
@property (nonatomic) BOOL hasJitterBufferResidencyTimeMedian;
@property (nonatomic) unsigned int jitterBufferResidencyTimeMedian;
@property (nonatomic) BOOL hasJitterBufferResidencyTime95Percentile;
@property (nonatomic) unsigned int jitterBufferResidencyTime95Percentile;
@property (nonatomic) BOOL hasRatType;
@property (nonatomic) unsigned int ratType;
@property (nonatomic) BOOL hasVocoderType;
@property (nonatomic) unsigned int vocoderType;
@property (nonatomic) BOOL hasVocoderSampleRate;
@property (nonatomic) unsigned int vocoderSampleRate;
@property (nonatomic) BOOL hasUlVocoderBitRate;
@property (nonatomic) unsigned int ulVocoderBitRate;
@property (nonatomic) BOOL hasDlVocoderBitRate;
@property (nonatomic) unsigned int dlVocoderBitRate;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearFrameErasureRateHistograms;
- (void)addFrameErasureRateHistogram:(unsigned int)a0;
- (void)addJitterBufferResidencyTimeHistogram:(unsigned int)a0;
- (void)addJitterBufferUnderflowRateHistogram:(unsigned int)a0;
- (void)addRtpPacketLossRateHistogram:(unsigned int)a0;
- (void)clearJitterBufferResidencyTimeHistograms;
- (void)clearJitterBufferUnderflowRateHistograms;
- (void)clearRtpPacketLossRateHistograms;
- (unsigned int)frameErasureRateHistogramAtIndex:(unsigned long long)a0;
- (unsigned int)jitterBufferResidencyTimeHistogramAtIndex:(unsigned long long)a0;
- (unsigned int)jitterBufferUnderflowRateHistogramAtIndex:(unsigned long long)a0;
- (unsigned int)rtpPacketLossRateHistogramAtIndex:(unsigned long long)a0;
- (void)setFrameErasureRateHistograms:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setJitterBufferResidencyTimeHistograms:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setJitterBufferUnderflowRateHistograms:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setRtpPacketLossRateHistograms:(unsigned int *)a0 count:(unsigned long long)a1;

@end
