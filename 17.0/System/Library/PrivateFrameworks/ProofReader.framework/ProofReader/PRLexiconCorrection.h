@interface PRLexiconCorrection : NSObject

@property (readonly) unsigned int tokenID;
@property (readonly) double score;
@property (readonly) unsigned long long errorType;

- (id)description;
- (id)initWithTokenID:(unsigned int)a0 score:(double)a1 errorType:(unsigned long long)a2;

@end
