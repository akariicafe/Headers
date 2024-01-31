@class HFCharacteristicValueDisplayMetadata, NSDictionary, HFCharacteristicBatchReadResponse;

@interface HFServiceLikeItemUpdateResponse : NSObject

@property (readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata;
@property (readonly, nonatomic) HFCharacteristicBatchReadResponse *readResponse;
@property (readonly, nonatomic) NSDictionary *standardResults;

- (void).cxx_destruct;
- (id)initWithDisplayMetadata:(id)a0 readResponse:(id)a1 standardResults:(id)a2;

@end
