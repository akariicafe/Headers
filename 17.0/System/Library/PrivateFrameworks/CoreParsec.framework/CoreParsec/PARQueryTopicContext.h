@class SFQueryTopic, NSString;

@interface PARQueryTopicContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFQueryTopic *topic;
@property (retain, nonatomic) NSString *contextId;
@property (readonly, nonatomic) long long index;

- (long long)index;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTopic:(id)a0 index:(long long)a1;

@end
