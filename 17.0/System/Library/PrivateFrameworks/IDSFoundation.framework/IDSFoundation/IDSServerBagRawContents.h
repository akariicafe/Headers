@class NSData, NSArray, NSDate;

@interface IDSServerBagRawContents : NSObject <NSCopying>

@property (readonly, nonatomic) NSDate *loadDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double timeToLive;
@property (readonly, nonatomic) NSData *serverSignature;
@property (readonly, nonatomic) NSArray *serverCerts;
@property (readonly, nonatomic) NSData *signedBag;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLoadDate:(id)a0 timeToLive:(double)a1 serverSignature:(id)a2 serverCerts:(id)a3 signedBag:(id)a4;

@end
