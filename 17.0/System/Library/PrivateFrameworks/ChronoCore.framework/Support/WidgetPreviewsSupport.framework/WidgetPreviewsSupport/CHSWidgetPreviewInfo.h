@class NSString;

@interface CHSWidgetPreviewInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ metricsSpecifications;
    void /* unknown type, empty encoding */ environment;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
