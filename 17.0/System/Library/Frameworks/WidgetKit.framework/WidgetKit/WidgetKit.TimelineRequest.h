@interface WidgetKit.TimelineRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ widget;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ fileHandle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
