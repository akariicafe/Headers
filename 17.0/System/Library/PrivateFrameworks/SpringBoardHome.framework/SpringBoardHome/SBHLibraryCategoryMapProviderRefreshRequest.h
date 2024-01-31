@class NSString, NSMutableDictionary;

@interface SBHLibraryCategoryMapProviderRefreshRequest : NSObject <NSCopying> {
    NSMutableDictionary *_failures;
}

@property (readonly, nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *requestReason;
@property (copy, nonatomic) NSString *senderDescription;
@property (readonly, nonatomic) unsigned long long failureCount;

- (id)failureForSessionIdentifier:(long long)a0;
- (id)description;
- (id)initWithOptions:(unsigned long long)a0 reason:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasFailedSeveralTimes;
- (void)accumulateFailure:(id)a0 forSession:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
