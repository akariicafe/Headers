@interface HMDurationEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;

+ (id)createWithDictionary:(id)a0 home:(id)a1;

- (void)setOffset:(double)a0;
- (id)initWithDuration:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_serializeForAdd;
- (void)_updateFromDictionary:(id)a0;
- (id)initWithDict:(id)a0 duration:(double)a1;
- (void)updateDuration:(double)a0 completionHandler:(id /* block */)a1;

@end
