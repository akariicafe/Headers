@interface MADownloadConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL discretionary;

- (id)initWithPlist:(id)a0;
- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsPlist;
- (void)logConfig;
- (id)initWithCoder:(id)a0;

@end
