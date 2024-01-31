@class NSDictionary;

@interface SCMLImageLabelCoder : NSObject

@property (retain, nonatomic) NSDictionary *_encodeToHexDict;
@property (retain, nonatomic) NSDictionary *_decodeFromHexDict;
@property (retain, nonatomic) NSDictionary *_encodeToP1Dict;
@property (retain, nonatomic) NSDictionary *_decodeFromP1Dict;

+ (id)instance;
+ (id)_createHexDecodingDict;
+ (id)_createHexEncodingDict;
+ (id)_createP1DecodingDict;
+ (id)_createP1EncodingDict;
+ (id)_nameFromRevParts:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)decodeFromHex:(id)a0;
- (id)decodeFromP1:(id)a0;
- (id)encodeToHex:(id)a0;
- (id)encodeToP1:(id)a0;

@end
