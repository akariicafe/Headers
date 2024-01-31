@class NSData, NSString, fullPropSpec;

@interface cContentRestriction : NSObject <RestrictionProtocol>

@property (retain) fullPropSpec *propSpec;
@property unsigned int charCount;
@property (retain) NSData *pwcsPhrase;
@property (retain) NSString *phraseStr;
@property unsigned int lcid;
@property int genMethod;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (int)setPhrase:(id)a0;
- (void).cxx_destruct;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;
- (id)initWithMethod:(int)a0 Weight:(unsigned int)a1;
- (int)restrictionNumber;

@end
