@class NSData, NSString;

@interface HAPCharacteristicValueRange : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *lowerBound;
@property (retain, nonatomic) NSData *upperBound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithLowerBound:(id)a0 upperBound:(id)a1;
- (id)serializeWithError:(id *)a0;

@end
