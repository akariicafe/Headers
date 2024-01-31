@class NSString, NSArray;

@interface RWIProtocolRuntimeObjectPreview : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL lossless;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (nonatomic) BOOL overflow;
@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSArray *entries;
@property (nonatomic) int size;

- (id)initWithType:(long long)a0 lossless:(BOOL)a1;

@end
