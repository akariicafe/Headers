@class NSString, CHSWidgetMetrics, CHSWidget;

@interface CHSWidgetKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSWidget *widget;
@property (readonly, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) NSString *hostIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWidget:(id)a0 metrics:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithWidget:(id)a0 metrics:(id)a1 hostIdentifier:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
