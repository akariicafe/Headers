@class NSUUID, NSDateInterval;

@interface SMTriggerDestinationStateEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) BOOL sortByStateStartDate;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) NSDateInterval *dateInterval;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 sortByStateStartDate:(BOOL)a2 ascending:(BOOL)a3 dateInterval:(id)a4 sessionIdentifier:(id)a5;

@end
