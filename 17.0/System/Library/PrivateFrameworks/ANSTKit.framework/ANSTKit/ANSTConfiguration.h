@interface ANSTConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic) long long networkEngineType;
@property (nonatomic) unsigned int qualityOfService;

+ (id)new;

- (id)init;
- (id)initWithVersion:(unsigned long long)a0;

@end
