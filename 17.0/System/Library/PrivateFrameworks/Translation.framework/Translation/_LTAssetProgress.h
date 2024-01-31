@class NSString, NSMutableDictionary;

@interface _LTAssetProgress : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _totalUnitCount;
    long long _completedUnitCount;
    NSMutableDictionary *_components;
    NSString *_identifierPrefix;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long totalUnitCount;
@property (readonly, nonatomic) long long completedUnitCount;
@property (readonly, nonatomic) double fractionCompleted;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL hasComponents;
@property (nonatomic) long long offlineState;
@property (copy, nonatomic) NSString *componentFilter;

+ (id)discreteProgressWithIdentifier:(id)a0 offlineState:(long long)a1;
+ (id)discreteProgressWithIdentifier:(id)a0 totalUnitCount:(long long)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)addComponent:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)cancel;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)removeComponent:(id)a0;
- (id)identifierPrefix;
- (BOOL)updatePercentComplete:(double)a0;
- (void)removeAllComponents;
- (void)_fastReadTotal:(long long *)a0 completed:(long long *)a1;
- (id)initWithIdentifier:(id)a0 offlineState:(long long)a1;
- (id)initWithIdentifier:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2;
- (void)setGreaterThanOrEqualToOfflineState:(long long)a0;
- (BOOL)updateTotalUnitCount:(long long)a0 completedUnitCount:(long long)a1;

@end
