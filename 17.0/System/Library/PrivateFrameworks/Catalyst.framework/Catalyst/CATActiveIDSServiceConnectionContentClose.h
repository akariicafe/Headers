@class NSError, NSDictionary;

@interface CATActiveIDSServiceConnectionContentClose : NSObject <CATActiveIDSServiceConnectionMessageContent>

@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (id)initWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
