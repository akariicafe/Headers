@class NSString, NSDictionary, NSURL, NSDate;

@interface CKDTrafficMetadata : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ method;
    void /* unknown type, empty encoding */ headers;
    void /* unknown type, empty encoding */ requestClassName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSString *method;
@property (nonatomic) void /* unknown type, empty encoding */ status;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSString *requestClassName;
@property (nonatomic) void /* unknown type, empty encoding */ parsingStandaloneMessage;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
