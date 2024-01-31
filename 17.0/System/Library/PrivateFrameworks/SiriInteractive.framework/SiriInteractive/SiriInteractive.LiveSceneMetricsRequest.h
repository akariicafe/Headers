@class NSString, _TtC15SiriInteractive27LiveSceneItemMetricsRequest;

@interface SiriInteractive.LiveSceneMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {
    void /* unknown type, empty encoding */ _lockScreenMetrics;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) _TtC15SiriInteractive27LiveSceneItemMetricsRequest *lockScreenMetrics;
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
- (id)initWithLockScreenMetrics:(id)a0;

@end
