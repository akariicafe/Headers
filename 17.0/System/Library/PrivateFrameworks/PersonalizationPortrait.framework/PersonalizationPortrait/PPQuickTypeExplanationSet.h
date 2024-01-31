@class _PASLock;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {
    _PASLock *_set;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)stringFromExplanation:(unsigned char)a0;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)a0;

- (void)push:(unsigned char)a0;
- (id)init;
- (unsigned long long)hash;
- (void)enumerateWithBlock:(id /* block */)a0;
- (BOOL)isEqualToQuickTypeExplanationSet:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
