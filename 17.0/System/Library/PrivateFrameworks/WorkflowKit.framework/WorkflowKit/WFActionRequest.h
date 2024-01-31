@class NSString, NSDictionary, WFAction;

@interface WFActionRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSDictionary *serializedParameters;
@property (retain, nonatomic) WFAction *result;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActionIdentifier:(id)a0 serializedParameters:(id)a1;

@end
