@class NSString, NSURL, NSDictionary;

@interface UAFAsset : NSObject {
    unsigned long long _hash;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSURL *location;
@property (readonly, copy) NSDictionary *metadata;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 location:(id)a1 metadata:(id)a2;
- (unsigned long long)_generateHash;

@end
