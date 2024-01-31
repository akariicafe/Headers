@class ICCRVectorTimestamp;
@protocol ICCRDataType;

@interface ICCRDictionaryElement : NSObject

@property (retain, nonatomic) id<ICCRDataType> value;
@property (retain, nonatomic) ICCRVectorTimestamp *timestamp;

+ (id)temporaryElementWithValue:(id)a0;

- (unsigned long long)hash;
- (id)initWithValue:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (id)initWithValue:(id)a0 timestamp:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
