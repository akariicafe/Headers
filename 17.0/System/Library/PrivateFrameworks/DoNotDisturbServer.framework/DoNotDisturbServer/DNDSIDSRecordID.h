@class NSString;

@interface DNDSIDSRecordID : NSObject <NSCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *zone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)dictionaryRepresentationWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithRecordID:(id)a0;
- (id)initWithIdentifier:(id)a0 zone:(id)a1;

@end
