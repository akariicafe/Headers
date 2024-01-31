@class NSData, FCInterestToken, NSString;

@interface FCRawFileDataProvider : NSObject <FCAssetDataProvider>

@property (readonly, nonatomic) FCInterestToken *holdToken;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) BOOL isRawFileConsumable;

- (id)init;
- (id)initWithFilePath:(id)a0;
- (id)initWithFilePath:(id)a0 holdToken:(id)a1;
- (void).cxx_destruct;

@end
