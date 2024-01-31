@interface RTDiagnosticOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long optionsMask;

- (id)init;
- (void)setMask:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearMask;
- (BOOL)hasMask:(unsigned long long)a0;
- (id)initWithOptionsMask:(unsigned long long)a0;

@end
