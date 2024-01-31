@class NSString;

@interface PSISynonym : NSObject <NSCopying, PSISearchableTerm>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned long long owningGroupId;
@property (readonly, nonatomic) NSString *identifier;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0 category:(unsigned long long)a1 owningGroupId:(unsigned long long)a2 identifier:(id)a3;

@end
