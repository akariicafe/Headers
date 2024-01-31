@class NSString;

@interface SBSAElementIdentification : NSObject <SAElementIdentifying, NSCopying>

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClientIdentifier:(id)a0 elementIdentifier:(id)a1;
- (id)initWithElementIdentification:(id)a0;

@end
