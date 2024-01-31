@class NSString, ICASDocScanActionType, ICASDocScanStage;

@interface ICASDocScanData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *docScanID;
@property (readonly, nonatomic) ICASDocScanActionType *docScanActionType;
@property (readonly, nonatomic) ICASDocScanStage *docScanStage;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithDocScanID:(id)a0 docScanActionType:(id)a1 docScanStage:(id)a2;

@end
