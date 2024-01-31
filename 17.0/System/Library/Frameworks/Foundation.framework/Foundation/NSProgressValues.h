@class NSString, NSMutableDictionary;

@interface NSProgressValues : NSObject <NSSecureCoding> {
    NSMutableDictionary *_userInfo;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _selfFraction;
    struct _NSProgressFraction { long long completed; long long total; BOOL overflowed; } _childFraction;
    double _remoteFractionCompleted;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    NSString *_kind;
    long long _portionOfParent;
    BOOL _isCancellable;
    BOOL _isPausable;
    BOOL _isCancelled;
    BOOL _isPaused;
    BOOL _usingChildUserInfo;
    BOOL _isPrioritizable;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_importantKeys;
+ (id)decodableClasses;

- (long long)completedUnitCount;
- (id)init;
- (void)setFractionCompleted:(double)a0;
- (void)dealloc;
- (BOOL)isFinished;
- (void)setTotalUnitCount:(long long)a0;
- (struct _NSProgressFraction { long long x0; long long x1; BOOL x2; })overallFraction;
- (void)encodeWithCoder:(id)a0;
- (void)setFinished:(BOOL)a0;
- (BOOL)isIndeterminate;
- (long long)totalUnitCount;
- (id)description;
- (double)fractionCompleted;
- (void)setCompletedUnitCount:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)_indentedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIndeterminate:(BOOL)a0;

@end
