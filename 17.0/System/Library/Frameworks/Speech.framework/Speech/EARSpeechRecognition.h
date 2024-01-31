@class NSArray;

@interface EARSpeechRecognition : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *tokenSausage;
@property (readonly, copy, nonatomic) NSArray *interpretationIndices;
@property (readonly, copy, nonatomic) NSArray *oneBest;
@property (readonly, copy, nonatomic) NSArray *nBest;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecognition:(id)a0;

@end
