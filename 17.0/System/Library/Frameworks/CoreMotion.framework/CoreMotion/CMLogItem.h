@interface CMLogItem : NSObject <NSSecureCoding, NSCopying> {
    id _internalLogItem;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
