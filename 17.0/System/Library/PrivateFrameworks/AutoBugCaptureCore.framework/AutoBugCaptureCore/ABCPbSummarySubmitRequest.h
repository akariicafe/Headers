@class NSString, NSMutableArray;

@interface ABCPbSummarySubmitRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying> {
    struct { unsigned char ver : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasVer;
@property (nonatomic) unsigned int ver;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) BOOL hasBuildPlatform;
@property (retain, nonatomic) NSString *buildPlatform;
@property (readonly, nonatomic) BOOL hasDeviceCategory;
@property (retain, nonatomic) NSString *deviceCategory;
@property (retain, nonatomic) NSMutableArray *sigRequests;

+ (Class)sigRequestType;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSigRequest:(id)a0;
- (void)clearSigRequests;
- (id)sigRequestAtIndex:(unsigned long long)a0;
- (unsigned long long)sigRequestsCount;

@end
