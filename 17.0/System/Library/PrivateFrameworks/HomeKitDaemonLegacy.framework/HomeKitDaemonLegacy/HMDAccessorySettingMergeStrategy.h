@class NSNumber;

@interface HMDAccessorySettingMergeStrategy : HMFObject

@property (readonly, nonatomic) NSNumber *conflictValue;
@property (readonly, nonatomic) long long strategy;

- (void).cxx_destruct;
- (id)initWithMergeStrategy:(id)a0;

@end
