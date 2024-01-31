@class NSString;

@interface MAAutoAssetLockReason : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *autoAssetClientName;
@property (retain, nonatomic) NSString *lockReason;

- (id)initFromClientLockReasonKey:(id)a0;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)newSummaryDictionary;
- (id)initForClientName:(id)a0 forLockReason:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
