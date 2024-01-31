@class NSString, NSMutableDictionary, NSCharacterSet;

@interface PBTextReader : NSObject {
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_tagNameCharacterSet;
    NSCharacterSet *_nonHexDigitCharacterSet;
    unsigned long long _pos;
    unsigned long long _length;
    NSString *_string;
    NSMutableDictionary *_objects;
    NSMutableDictionary *_cachedObjectTypes;
}

- (id)init;
- (void)dealloc;
- (id)readMessageType:(Class)a0 fromString:(id)a1;

@end
