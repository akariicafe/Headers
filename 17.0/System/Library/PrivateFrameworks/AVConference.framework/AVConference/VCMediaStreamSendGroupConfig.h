@class AVCStatisticsCollector, NSObject;
@protocol VCRedundancyControllerProtocol;

@interface VCMediaStreamSendGroupConfig : VCMediaStreamGroupConfig

@property (retain, nonatomic) NSObject<VCRedundancyControllerProtocol> *redundancyController;
@property (nonatomic) BOOL shouldSynchronizeWithSourceRTPTimestamps;
@property (nonatomic) unsigned int streamGroupMode;
@property (nonatomic) unsigned int redundancyMode;
@property (nonatomic) unsigned int redundancyPercentage;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;

- (void)dealloc;

@end
