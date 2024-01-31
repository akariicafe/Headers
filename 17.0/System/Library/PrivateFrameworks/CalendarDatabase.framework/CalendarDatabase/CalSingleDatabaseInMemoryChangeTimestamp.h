@interface CalSingleDatabaseInMemoryChangeTimestamp : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long others;
@property (readonly, nonatomic) unsigned long long myself;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDawnOfTime;
- (id)initWithTimestampForMyself:(unsigned long long)a0 others:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
