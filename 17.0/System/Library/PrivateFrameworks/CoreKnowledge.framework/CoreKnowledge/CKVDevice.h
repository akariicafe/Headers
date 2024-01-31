@class NSString;

@interface CKVDevice : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isLocal;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToDevice:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 isLocal:(BOOL)a1;

@end
