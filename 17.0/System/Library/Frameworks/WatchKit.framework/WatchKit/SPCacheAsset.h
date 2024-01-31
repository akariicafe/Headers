@class NSString;

@interface SPCacheAsset : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long size;
@property (nonatomic) double accessDate;

+ (id)fromProto:(id)a0;
+ (id)toProto:(id)a0;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 size:(unsigned long long)a1 state:(unsigned long long)a2 accessDate:(id)a3;

@end
