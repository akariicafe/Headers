@class IDSURI;

@interface IDSHandle : NSObject

@property (readonly, nonatomic) IDSURI *URI;
@property (readonly, nonatomic) BOOL isUserVisible;
@property (readonly, nonatomic) long long validationStatus;

- (unsigned long long)hash;
- (id)description;
- (id)initWithURI:(id)a0 isUserVisible:(BOOL)a1 validationStatus:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToHandle:(id)a0;

@end
