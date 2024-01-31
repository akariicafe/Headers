@class NSEnumerator, NSString, NSArray, NSDictionary;

@interface SDPParser : NSObject {
    NSArray *_lines;
    NSEnumerator *_lineEnumerator;
    NSDictionary *_fieldNameMap;
}

@property (readonly, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) NSString *fieldValue;
@property (readonly, nonatomic) unsigned char fieldType;
@property (readonly, nonatomic) BOOL parsingDone;

- (void)dealloc;
- (BOOL)nextLine;
- (id)initWithString:(id)a0;
- (BOOL)parseMediaLineHeader:(id)a0 mediaType:(int *)a1 supportedPayloads:(id)a2 rtpPort:(int *)a3;
- (int)stringToMediaType:(id)a0;

@end
