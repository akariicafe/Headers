@class NSString, NUIdentifier;

@interface NUSource : NSObject <NUIdentifiable>

@property (copy, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) NUIdentifier *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqualToSource:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sourceDefinition:(out id *)a0;

@end
