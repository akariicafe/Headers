@class NSArray, W5LogItemRequest, NSDictionary;

@interface W5LogItemReceipt : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) W5LogItemRequest *request;
@property (copy, nonatomic) NSArray *relativeURLs;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic) double startedAt;
@property (nonatomic) double completedAt;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToLogItemReceipt:(id)a0;

@end
