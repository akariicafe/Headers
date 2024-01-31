@class NSString;

@interface WFSiriSpeakTextRequest : WFSiriActionRequest

@property (readonly, copy, nonatomic) NSString *utterance;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUtterance:(id)a0;

@end
