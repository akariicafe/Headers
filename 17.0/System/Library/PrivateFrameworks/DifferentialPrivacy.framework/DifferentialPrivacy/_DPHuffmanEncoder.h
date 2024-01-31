@class NSString, NSDictionary, NSNumber;

@interface _DPHuffmanEncoder : NSObject {
    unsigned long long _maxOutputBitLength;
    NSDictionary *_table;
    NSNumber *_unknownTokenCode;
}

@property (readonly, copy, nonatomic) NSString *tableUUID;

+ (id)codeToBinaryString:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTableClassName:(id)a0 maxOutputBitLength:(unsigned long long)a1;
- (BOOL)tokenExist:(id)a0;
- (id)encodeTokens:(id)a0;

@end
