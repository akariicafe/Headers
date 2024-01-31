@class NSString, NSArray;

@interface TextToken : NSObject

@property (readonly) NSString *string;
@property (readonly) double score;
@property (readonly) NSArray *features;
@property (readonly) int wordID;
@property (readonly, nonatomic) unsigned long long properties;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 score:(double)a1 features:(id)a2 wordID:(int)a3 properties:(unsigned long long)a4;

@end
