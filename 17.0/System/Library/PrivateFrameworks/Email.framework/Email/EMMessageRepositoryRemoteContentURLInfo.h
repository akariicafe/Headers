@class NSURL, NSDate;

@interface EMMessageRepositoryRemoteContentURLInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned long long requestCount;
@property (readonly, nonatomic) NSDate *lastSeen;
@property (readonly, nonatomic) NSDate *lastRequested;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInitWithURL:(id)a0 requestCount:(unsigned long long)a1 lastSeen:(id)a2 lastRequested:(id)a3;
- (id)initWithURL:(id)a0 requestCount:(unsigned long long)a1 lastSeen:(id)a2 lastRequested:(id)a3;

@end
