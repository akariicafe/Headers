@class NSData;

@interface SAMLDSAKeyValue : SAMLBaseElement

@property (readonly, nonatomic) NSData *p;
@property (readonly, nonatomic) NSData *q;
@property (readonly, nonatomic) NSData *g;
@property (readonly, nonatomic) NSData *y;
@property (readonly, nonatomic) NSData *j;
@property (readonly, nonatomic) NSData *seed;
@property (readonly, nonatomic) NSData *pgenCounter;

+ (id)createElement:(id *)a0;

@end
