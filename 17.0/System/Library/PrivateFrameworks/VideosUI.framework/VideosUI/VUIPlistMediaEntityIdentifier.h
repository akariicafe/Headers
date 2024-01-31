@class NSString, VUIMediaEntityType;

@interface VUIPlistMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
