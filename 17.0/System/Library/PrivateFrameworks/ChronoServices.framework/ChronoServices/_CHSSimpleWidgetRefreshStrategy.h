@class NSString;

@interface _CHSSimpleWidgetRefreshStrategy : NSObject <BSDescriptionStreamable, CHSWidgetRefreshStrategy, NSSecureCoding> {
    NSString *_rateLimitIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isDefaultStrategy) BOOL isDefaultStrategy;
@property (readonly, nonatomic, getter=isRateLimited) BOOL rateLimited;
@property (readonly, copy, nonatomic) NSString *rateLimitIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRateLimitIdentifier:(id)a0;
- (id)initWithDefaultStrategy;
- (id)initWithRateLimitIdentifier:(id)a0;

@end
