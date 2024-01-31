@class NSNumber, NSString;

@interface CKVDataset : NSObject

@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) unsigned short itemType;

+ (id)_datasetIdentifierFrom:(id)a0 originAppId:(id)a1 itemType:(unsigned short)a2;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)changePublisher;
- (id)getItemTypeNumber;
- (id)initWithUserId:(id)a0 originAppId:(id)a1 itemType:(unsigned short)a2;
- (BOOL)isEqualToDataset:(id)a0;

@end
