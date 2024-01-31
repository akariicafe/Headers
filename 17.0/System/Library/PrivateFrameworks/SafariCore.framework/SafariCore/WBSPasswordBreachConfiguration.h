@class NSString, NSURL, NSURLSessionConfiguration;

@interface WBSPasswordBreachConfiguration : NSObject <NSCopying> {
    BOOL _isInternalBuild;
    BOOL _shouldRefillBagWhenEmpty;
}

@property (class, readonly, nonatomic) WBSPasswordBreachConfiguration *standardConfiguration;

@property (readonly, nonatomic) NSString *highFrequencyBucketHashSalt;
@property (readonly, nonatomic) NSString *lowFrequencyBucketHashSalt;
@property (readonly, nonatomic) unsigned long long highFrequencyBucketHashWorkFactor;
@property (readonly, nonatomic) unsigned long long lowFrequencyBucketHashWorkFactor;
@property (readonly, nonatomic) unsigned long long highFrequencyBucketScryptBlockSizeR;
@property (readonly, nonatomic) unsigned long long lowFrequencyBucketScryptBlockSizeR;
@property (readonly, nonatomic) unsigned long long highFrequencyBucketScryptParallelismFactorP;
@property (readonly, nonatomic) unsigned long long lowFrequencyBucketScryptParallelismFactorP;
@property (readonly, nonatomic) unsigned long long lowFrequencyBucketIdentifierBitCount;
@property (readonly, nonatomic) NSURL *highFrequencyBucketURL;
@property (readonly, nonatomic) NSURL *lowFrequencyBucketURL;
@property (readonly, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration;
@property (readonly, nonatomic) double minimumDelayBetweenSessions;
@property (readonly, nonatomic) unsigned long long passwordCheckBatchSize;
@property (readonly, nonatomic) unsigned long long numberOfBatchesPerSession;
@property (readonly, nonatomic) unsigned long long fakePasswordLengthBytes;
@property (readonly, nonatomic) unsigned long long lowFrequencyBucketFetchTimeout;
@property (readonly, nonatomic) BOOL shouldRefillBagWhenEmpty;
@property (readonly, nonatomic) BOOL verboseSensitiveLoggingEnabled;

- (id)initWithDictionary:(id)a0 protocolClasses:(id)a1 allowValuesForTesting:(BOOL)a2;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isVerboseSensitiveLoggingEnabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
