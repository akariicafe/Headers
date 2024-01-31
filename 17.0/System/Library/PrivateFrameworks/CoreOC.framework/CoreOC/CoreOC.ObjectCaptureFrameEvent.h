@class NSString;

@interface CoreOC.ObjectCaptureFrameEvent : NSObject <NSCoding, NSSecureCoding> {
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ gesture;
    void /* unknown type, empty encoding */ scanStatus;
    void /* unknown type, empty encoding */ position;
    void /* unknown type, empty encoding */ boxTransform;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
