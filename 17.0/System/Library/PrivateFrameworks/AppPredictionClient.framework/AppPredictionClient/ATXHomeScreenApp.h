@class NSString, ATXHomeScreenPage;

@interface ATXHomeScreenApp : NSObject <ATXHomeScreenLeafIconRepresentable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *predictionSource;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) unsigned long long numUniqueDays;
@property (readonly, nonatomic) unsigned long long numAppLaunches;
@property (weak, nonatomic) ATXHomeScreenPage *page;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleId:(id)a0 predictionSource:(id)a1 score:(double)a2 uniqueDaysLaunched:(unsigned long long)a3 rawLaunchCount:(unsigned long long)a4;
- (id)initWithBundleId:(id)a0 predictionSource:(id)a1 score:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleId:(id)a0 predictionSource:(id)a1;
- (id)initWithBundleId:(id)a0;
- (BOOL)isEqualToATXHomeScreenApp:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentationForIntrospection;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
