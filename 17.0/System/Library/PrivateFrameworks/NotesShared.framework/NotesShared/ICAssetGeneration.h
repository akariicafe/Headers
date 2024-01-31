@class NSString;

@interface ICAssetGeneration : NSObject <NSCopying>

@property (readonly, nonatomic) long long number;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *rawValue;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRawValue:(id)a0;
- (id)initWithNumber:(long long)a0 identifier:(id)a1;
- (id)nextGeneration;

@end
