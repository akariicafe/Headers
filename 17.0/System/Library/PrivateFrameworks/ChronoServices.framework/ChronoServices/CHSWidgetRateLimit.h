@class NSString;

@interface CHSWidgetRateLimit : NSObject <BSDescriptionStreamable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long maximumRefreshes;
@property (readonly, nonatomic) double window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMaximumRefreshes:(unsigned long long)a0 perWindow:(double)a1;

@end
