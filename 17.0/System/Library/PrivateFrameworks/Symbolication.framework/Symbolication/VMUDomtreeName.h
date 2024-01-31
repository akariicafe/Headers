@class NSObject;
@protocol NSCopying;

@interface VMUDomtreeName : NSObject <NSCopying> {
    NSObject<NSCopying> *_elements[6];
}

- (unsigned long long)hash;
- (id)initWithDict:(id)a0;
- (id)asArray;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
