@class NSString, NSDictionary, PBCodable;
@protocol NSCopying;

@interface IDSLocalMessageSentMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned int awdIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) BOOL isToDefaultPairedDevice;
@property (readonly, nonatomic) long long messageSize;
@property (readonly, nonatomic) unsigned long long linkType;
@property (readonly, nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 isToDefaultPairedDevice:(BOOL)a1 messageSize:(long long)a2 linkType:(unsigned long long)a3 priority:(long long)a4;

@end
