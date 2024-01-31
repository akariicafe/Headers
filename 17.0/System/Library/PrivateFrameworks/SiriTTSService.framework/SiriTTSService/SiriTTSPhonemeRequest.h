@class NSString;

@interface SiriTTSPhonemeRequest : SiriTTSBaseRequest {
    void /* unknown type, empty encoding */ text;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) void /* unknown type, empty encoding */ voice;
@property (nonatomic) void /* unknown type, empty encoding */ phonemeSystem;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 voice:(id)a1 phonemeSystem:(long long)a2;

@end
