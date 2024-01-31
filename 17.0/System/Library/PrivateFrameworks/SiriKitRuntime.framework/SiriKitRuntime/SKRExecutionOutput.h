@class NSString;

@interface SKRExecutionOutput : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ executionRequestId;
    void /* unknown type, empty encoding */ atoms;
    void /* unknown type, empty encoding */ command;
    void /* unknown type, empty encoding */ preCommandSubmissionContextUpdate;
    void /* unknown type, empty encoding */ postCommandSubmissionContextUpdate;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
