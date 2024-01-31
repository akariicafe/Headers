@class NSDictionary;

@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback

@property (nonatomic) long long responseSize;
@property (nonatomic) unsigned long long rawResponseSize;
@property (nonatomic) unsigned long long decompressedResponseSize;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSDictionary *networkTimingData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStartSearch:(id)a0 responseSize:(long long)a1 statusCode:(long long)a2 networkTimingData:(id)a3;

@end
