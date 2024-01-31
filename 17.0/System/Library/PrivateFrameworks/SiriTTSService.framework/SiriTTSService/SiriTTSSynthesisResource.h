@class NSString;

@interface SiriTTSSynthesisResource : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ language;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *language;
@property (nonatomic) void /* unknown type, empty encoding */ version;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *assetKey;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (id)initWithCoder:(id)a0;

@end
