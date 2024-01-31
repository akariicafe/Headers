@class NSString;

@interface VUIAppDocumentPurchaseEventDescriptor : VUIAppDocumentUpdateEventDescriptor

@property (copy, nonatomic) NSString *canonicalID;

- (unsigned long long)hash;
- (id)initWithEventType:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCanonicalID:(id)a0;

@end
