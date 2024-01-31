@class NSNumber, NSString;

@interface NMSQuotaEvaluationState_Legacy : NSObject

@property (retain, nonatomic) NSNumber *mediaLibraryIdentifier;
@property (retain, nonatomic) NSString *externalLibraryIdentifier;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) unsigned long long listTotalSize;
@property (nonatomic) unsigned long long listQuota;
@property (nonatomic) long long containerIndex;
@property (nonatomic) long long itemIndex;

- (void).cxx_destruct;

@end
