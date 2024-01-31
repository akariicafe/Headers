@class NSString, CKRecordID, NSError, CKRecord, NSObject;
@protocol OS_dispatch_source;

@interface CKDRecordFetchInfo : NSObject

@property (nonatomic) unsigned long long fetchOrder;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) double startDate;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource;
@property (nonatomic) BOOL ignoreErrors;

- (id)CKPropertiesDescription;
- (void)performCallback;
- (id)initWithAggregator:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
