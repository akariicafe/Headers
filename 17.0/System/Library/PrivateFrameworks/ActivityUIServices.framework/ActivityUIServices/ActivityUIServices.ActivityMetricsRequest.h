@class _TtC18ActivityUIServices28SystemApertureMetricsRequest, NSString, _TtC18ActivityUIServices26ActivityItemMetricsRequest;

@interface ActivityUIServices.ActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {
    void /* unknown type, empty encoding */ _ambientMetrics;
    void /* unknown type, empty encoding */ _lockScreenMetrics;
    void /* unknown type, empty encoding */ _systemApertureMetrics;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *ambientMetrics;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *lockScreenMetrics;
@property (nonatomic, retain) _TtC18ActivityUIServices28SystemApertureMetricsRequest *systemApertureMetrics;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithLockScreenMetrics:(id)a0 systemApertureMetrics:(id)a1 ambientMetrics:(id)a2;
- (id)initWithLockScreenMetrics:(id)a0 systemApertureMetrics:(id)a1;

@end
