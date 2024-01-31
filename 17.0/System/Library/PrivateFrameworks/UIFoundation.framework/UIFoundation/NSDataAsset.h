@class NSString, NSData, CUINamedData;

@interface NSDataAsset : NSObject <NSCopying> {
    CUINamedData *_namedData;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *typeIdentifier;

+ (id)_namedDataPrivateAccessorWithName:(id)a0 bundle:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 bundle:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
