@class NSString, NSMutableArray;

@interface NSSDiagnosticLogsInfoRespMsgFilesByCategory : PBCodable <NSCopying>

@property (nonatomic) int filesType;
@property (retain, nonatomic) NSString *directoryPath;
@property (retain, nonatomic) NSMutableArray *filePaths;

+ (Class)filePathsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsFilesType:(id)a0;
- (void)addFilePaths:(id)a0;
- (void)clearFilePaths;
- (id)filePathsAtIndex:(unsigned long long)a0;
- (unsigned long long)filePathsCount;
- (id)filesTypeAsString:(int)a0;

@end
