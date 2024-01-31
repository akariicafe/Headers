@class NSString, NSNumber, NSMutableData;

@interface DESChunk : NSObject

@property (readonly, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *clippingBound;
@property (readonly, nonatomic) NSMutableData *data;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 clippingBound:(id)a1 data:(id)a2;

@end
