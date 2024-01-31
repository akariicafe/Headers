@class AWDLibnetcoreTCPStatsReport, AWDLibnetcoreNetworkdStatsReport, AWDLibnetcoreMPTCPStatsReport, NSMutableArray, AWDLibnetcoreMbufStatsReport, AWDLibnetcoreTCPTFOStatsReport, AWDLibnetcoreTCPECNStatsReport, AWDNWAPIUsage;

@interface AWDLibnetcoreStatsReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char reportReason : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasReportReason;
@property (nonatomic) unsigned int reportReason;
@property (readonly, nonatomic) BOOL hasMbufStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreMbufStatsReport *mbufStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreTCPStatsReport *tcpStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpECNStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreTCPECNStatsReport *tcpECNStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpTFOStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreTCPTFOStatsReport *tcpTFOStatisticsReport;
@property (readonly, nonatomic) BOOL hasNetworkdStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreNetworkdStatsReport *networkdStatisticsReport;
@property (retain, nonatomic) NSMutableArray *tcpECNInterfaceReports;
@property (readonly, nonatomic) BOOL hasNwAPIUsageReport;
@property (retain, nonatomic) AWDNWAPIUsage *nwAPIUsageReport;
@property (readonly, nonatomic) BOOL hasMptcpStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreMPTCPStatsReport *mptcpStatisticsReport;

+ (Class)tcpECNInterfaceReportType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)tcpECNInterfaceReportsCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addTcpECNInterfaceReport:(id)a0;
- (id)tcpECNInterfaceReportAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)clearTcpECNInterfaceReports;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
