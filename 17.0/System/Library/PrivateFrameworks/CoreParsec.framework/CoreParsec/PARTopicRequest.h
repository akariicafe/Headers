@class NSArray;

@interface PARTopicRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *topics;
@property (nonatomic) double timeoutIntervalForRequest;
@property (readonly, retain) NSArray *localTopics;
@property (readonly, retain) NSArray *queryTopicContexts;

- (Class)responseClass;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned int)nwActivityLabel;

@end
