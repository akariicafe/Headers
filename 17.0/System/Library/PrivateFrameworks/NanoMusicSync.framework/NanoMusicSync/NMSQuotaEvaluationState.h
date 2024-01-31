@class NSNumber, NSString;

@interface NMSQuotaEvaluationState : NSObject

@property (retain, nonatomic) NSNumber *mediaLibraryIdentifier;
@property (retain, nonatomic) NSString *externalLibraryIdentifier;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) unsigned long long listTotalSize;
@property (nonatomic) unsigned long long listQuota;
@property (nonatomic) long long containerIndex;
@property (nonatomic) long long itemIndex;

- (void).cxx_destruct;
- (id)initWithCurrentItem:(id)a0 downloadInfo:(id)a1;

@end
