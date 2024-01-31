@interface WidgetKit.ActivityWidgetRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ descriptor;
    void /* unknown type, empty encoding */ defaultPayload;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ isStale;
    void /* unknown type, empty encoding */ payloadID;
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ jindoEnvironment;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
