@class CKAssetDownloadPreauthorization, NSArray, NSString, NSURL, NSError, NSData, NSMutableArray;
@protocol MMCSOperationMetric;

@interface CKDMMCSItemGroup : NSObject

@property (retain, nonatomic) NSArray *tuple;
@property (readonly, nonatomic) NSURL *contentBaseURL;
@property (readonly, nonatomic) NSString *owner;
@property (readonly, nonatomic) NSString *requestor;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property (nonatomic) BOOL complete;
@property (retain, nonatomic) id<MMCSOperationMetric> metrics;
@property (retain, nonatomic) NSData *authPutRequest;
@property (readonly, nonatomic) NSMutableArray *items;

+ (id)tupleForItem:(id)a0;

- (void)addItem:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithTuple:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
