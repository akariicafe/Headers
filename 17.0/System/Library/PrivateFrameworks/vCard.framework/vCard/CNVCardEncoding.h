@class NSString;

@interface CNVCardEncoding : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long stringEncoding;

+ (id)preferredEncodingInUserDefaults;
+ (id)addPreferredEncoding:(id)a0 toEncodings:(id)a1;
+ (id)asciiEncoding;
+ (id)encodingWithName:(id)a0 stringEncoding:(unsigned long long)a1;
+ (id)encodingsFromUserDefaults;
+ (id)isoLatin1Encoding;
+ (id)macRomanEncoding;
+ (id)makeStandardEncodings;
+ (id)standardEncodings;
+ (id)utf8Encoding;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 stringEncoding:(unsigned long long)a1;

@end
