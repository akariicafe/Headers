@class NSString;

@interface SIRINLURewriteMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int rewriteType;
@property (retain, nonatomic) NSString *rewrittenUtterance;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(int)a0 utterance:(id)a1;

@end
