@class NSData, FCInterestToken, NSString;

@interface FCANEFFileDataProvider : NSObject <FCAssetDataProvider>

@property (readonly, copy, nonatomic) NSData *wrappingKey;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) FCInterestToken *holdToken;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) BOOL isRawFileConsumable;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 wrappingKey:(id)a1 options:(long long)a2 holdToken:(id)a3;

@end
