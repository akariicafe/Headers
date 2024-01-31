@interface VCSParser : NSObject

+ (id)parseVCSData:(id)a0;
+ (unsigned long long)beginVCSEntity:(id)a0 withParseState:(id)a1;
+ (unsigned long long)decodeVCSLine:(id)a0 withParseState:(id)a1;
+ (unsigned long long)endVCSEntity:(id)a0 withParseState:(id)a1;
+ (id)parseVCSFile:(id)a0;

@end
